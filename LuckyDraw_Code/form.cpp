#include "form.h"
#include "ui_form.h"
#include"mainwindow.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    setWindowTitle("中奖名单");
    this->setStyleSheet("background-color:pink;");
}

Form::~Form()
{
    delete ui;
}

void Form::setText(QString str,int num)
{
    switch (num)
    {
        case 0://一等奖
        {
            ui->label_name1->setText(str);
            update();
            break;
        }
        case 1://二等奖
        {
            ui->label_name2->setText(str);
            break;
        }
        case 2://三等奖
        {
            ui->label_name3->setText(str);
            break;
        }
    }
}
