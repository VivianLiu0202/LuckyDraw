#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include"form.h"
#include<QPalette>
#include<QMediaPlayer>
#include<QSound>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    pd = false;
    ui->setupUi(this);
    ui->namelabel->setText("幸运儿究竟是谁？？");//一开始显示在ui->label里面的文字
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(buttonEvent()));

    //添加窗口图标
    setWindowIcon(QIcon(":/image/Icon1.jpg"));

    //添加背景音乐
    QSound::play(":/music/李佳龙Jog - 好运来（吉他弹唱）.wav");

}

void MainWindow::changename()
{
    QFileDialog *fileDialog = new QFileDialog(this);
    fileDialog->setWindowTitle(tr("Open Image"));
    fileDialog->setDirectory(".");
    if(fileDialog->exec() == QDialog::Accepted)
    {
        path = fileDialog->selectedFiles()[0];
        ui->lineEdit->setText(path);
        readname(path);
        QMessageBox::information(NULL, tr("Path"), tr("You selected successfully! QWQ "));
    }
    //读入数据时确认
    else
    {
        QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files. QAQ"));
    }
    //未读入数据提醒

}

//读入文件中的数据并保存在数组
void MainWindow::readname(QString path)
{
    QFile file(path);
    if(file.open(QFile::ReadOnly))
    {
        QTextStream stream(&file);
        stream.setCodec("GBK");
        while(!stream.atEnd())
        {
            namelist.append(stream.readLine());

        }
        file.close();
    }
    else
    {
        QMessageBox::critical(this, tr("error"), file.errorString());
    }
}

void MainWindow::start()
{
    if(pd == true)
    {
        QMessageBox::information(NULL, tr("PRIZE"), tr("You’ve already drawn this prize!!"));
        return ;
    }
    if(!namelist.count()) return ;
    m_Timer = new QTimer(this);
    connect(m_Timer,SIGNAL(timeout()),this,SLOT(on_timer()));
    m_Timer->start(10);//抽奖人员每10ms变化一次
    pd = true;
}


void MainWindow::prizenumchange()
{
    pd = false;//每次改变抽的奖时刷新
}

void MainWindow::buttonEvent()
{
    f->setMaximumSize(450,360);
    f->setMinimumSize(450,360);
    f->setStyleSheet("background-color:pink;");//设置背景颜色
    f->setWindowIcon(QIcon(":/image/Icon2.jpg"));//设置图标
    f->setText(ui->namelabel->text(),winnum);//传递信号
}


void MainWindow::stop()
{
    m_Timer->stop();
    winnername = ui->namelabel->text();
    winnum = ui->prizenum->currentIndex();
    buttonEvent();
    namelist.removeOne(winnername);
}


void MainWindow::on_timer()
{
    if(namelist.count() == 0)
    {
        return;
    }
    static int i = 0;
    ui->namelabel->setText(namelist[i]);
    update();
    i++;
    if(i >= namelist.count())
    {
        i = 0;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    f->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}



