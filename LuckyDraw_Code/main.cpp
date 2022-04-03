#include "mainwindow.h"
#include <QApplication>
#include<QFrame>
#include<QSound>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMaximumSize(1000,600);
    w.setMinimumSize(1000,600);
    w.setWindowTitle("欢乐抽奖！");


    w.show();

    return a.exec();
}
