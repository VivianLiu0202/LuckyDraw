/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGroupBox *groupBox;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_name1;
    QLabel *label_name2;
    QLabel *label_name3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(661, 451);
        Form->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 391, 311));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(10, 0, 101, 71));
        label_1->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color: rgb(255, 11, 3);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 121, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color:rgb(255, 162, 0)"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 180, 191, 81));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color:rgb(48, 62, 255)"));
        label_name1 = new QLabel(groupBox);
        label_name1->setObjectName(QStringLiteral("label_name1"));
        label_name1->setGeometry(QRect(10, 50, 411, 61));
        label_name1->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\344\273\277\345\256\213\";"));
        label_name2 = new QLabel(groupBox);
        label_name2->setObjectName(QStringLiteral("label_name2"));
        label_name2->setGeometry(QRect(10, 140, 371, 51));
        label_name2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\344\273\277\345\256\213\";"));
        label_name3 = new QLabel(groupBox);
        label_name3->setObjectName(QStringLiteral("label_name3"));
        label_name3->setGeometry(QRect(10, 240, 371, 61));
        label_name3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\344\273\277\345\256\213\";"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Form", "\345\271\270\350\277\220\347\232\204\344\272\272\345\204\277", Q_NULLPTR));
        label_1->setText(QApplication::translate("Form", "\344\270\200\347\255\211\345\245\226", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form", "\344\272\214\347\255\211\345\245\226", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form", "\344\270\211\347\255\211\345\245\226", Q_NULLPTR));
        label_name1->setText(QApplication::translate("Form", "\346\230\257\350\260\201\345\221\242QWQ", Q_NULLPTR));
        label_name2->setText(QApplication::translate("Form", "\346\230\257\350\260\201\345\221\242QAQ", Q_NULLPTR));
        label_name3->setText(QApplication::translate("Form", "\346\230\257\350\260\201\345\221\242QWQ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
