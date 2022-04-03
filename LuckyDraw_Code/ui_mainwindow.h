/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QComboBox *prizenum;
    QLabel *namelabel;
    QLineEdit *lineEdit;
    QLabel *label_prize;
    QPushButton *pushButton_4;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1034, 633);
        MainWindow->setStyleSheet(QStringLiteral("#MainWindow{border-image: url(:/image/background.jpg);}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 40, 91, 41));
        pushButton_2->setStyleSheet(QLatin1String("font: 63 9pt \"Lucida Bright\";\n"
""));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(320, 460, 81, 51));
        pushButton_1->setStyleSheet(QLatin1String("font: 63 10pt \"Lucida Bright\";\n"
"color:rgb(0,0,0)"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 460, 81, 51));
        pushButton_3->setStyleSheet(QLatin1String("font: 63 10pt \"Lucida Bright\";\n"
"color:rgb(0,0,0)"));
        prizenum = new QComboBox(centralWidget);
        prizenum->setObjectName(QStringLiteral("prizenum"));
        prizenum->setGeometry(QRect(560, 40, 361, 41));
        namelabel = new QLabel(centralWidget);
        namelabel->setObjectName(QStringLiteral("namelabel"));
        namelabel->setGeometry(QRect(240, 290, 561, 91));
        namelabel->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\347\255\211\347\272\277\";\n"
"color:rgb(0,0,0)"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 40, 281, 41));
        label_prize = new QLabel(centralWidget);
        label_prize->setObjectName(QStringLiteral("label_prize"));
        label_prize->setGeometry(QRect(480, 40, 91, 41));
        label_prize->setStyleSheet(QStringLiteral("font: 63 10pt \"Lucida Bright\";"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(580, 460, 101, 51));
        pushButton_4->setStyleSheet(QLatin1String("font: 63 10pt \"Lucida Bright\";\n"
"color:rgb(0,0,0)"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_1, SIGNAL(clicked()), MainWindow, SLOT(start()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(changename()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(stop()));
        QObject::connect(prizenum, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(prizenumchange()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "START", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "STOP", Q_NULLPTR));
        prizenum->clear();
        prizenum->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\200\347\255\211\345\245\226", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\272\214\347\255\211\345\245\226", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\211\347\255\211\345\245\226", Q_NULLPTR)
        );
        namelabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_prize->setText(QApplication::translate("MainWindow", "  \345\245\226\351\241\271", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "WINNERS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
