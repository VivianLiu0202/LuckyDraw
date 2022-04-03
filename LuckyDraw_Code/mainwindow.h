#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QString>
#include<QStringlist>
#include<QTimer>
#include<QFileDialog>
#include"form.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    QString namestr;
    QStringList namelist;
    QTimer *m_Timer;
    QString path;//人员名单路径
    QString winnername;
    int winnum;//中奖类型
    bool pd;//判断是否开始

    Form *f = new Form();

    void readname(QString path);

private slots:
   // void on_pushButton_start_clicked();
    //void changeSlots();
    void changename();
    void on_timer();
    void stop();
    void prizenumchange();
    void start();



private:
    Ui::MainWindow *ui;

private slots:
    void buttonEvent();
    void on_pushButton_4_clicked();
};

#endif // MAINWINDOW_H
