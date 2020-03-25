/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QListWidget *list1;
    QPushButton *selectButton;
    QLabel *label_4;
    QLabel *countLabel;
    QLabel *label_5;
    QPushButton *returnButton;
    QListWidget *list2;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *radioButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(888, 567);
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 248, 250);"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 35, 101, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(480, 40, 101, 31));
        label_2->setFont(font);
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 101, 31));
        label_3->setFont(font);
        lineEdit1 = new QLineEdit(Form);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setGeometry(QRect(120, 40, 221, 31));
        lineEdit1->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 75 11pt \"Microsoft YaHei UI\";\n"
"border:2px solid;"));
        lineEdit2 = new QLineEdit(Form);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
        lineEdit2->setGeometry(QRect(600, 40, 241, 31));
        lineEdit2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 75 11pt \"Microsoft YaHei UI\";\n"
"border:2px solid;\n"
"font: 75 12pt \"Microsoft JhengHei UI\";"));
        lineEdit2->setReadOnly(true);
        list1 = new QListWidget(Form);
        list1->setObjectName(QString::fromUtf8("list1"));
        list1->setGeometry(QRect(120, 90, 761, 101));
        list1->setFont(font);
        selectButton = new QPushButton(Form);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(10, 410, 101, 81));
        selectButton->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(6, 170, 83);\n"
"font: 75 10pt \"Microsoft YaHei UI\";\n"
"font: 75 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 540, 91, 16));
        label_4->setFont(font);
        countLabel = new QLabel(Form);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));
        countLabel->setGeometry(QRect(100, 540, 61, 21));
        countLabel->setFont(font);
        countLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 220, 41);"));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 0, 75, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 125, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px solid;"));
        returnButton = new QPushButton(Form);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(10, 0, 31, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/u=3427233200,2975671081&fm=26&gp=0.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon);
        returnButton->setIconSize(QSize(30, 30));
        list2 = new QListWidget(Form);
        list2->setObjectName(QString::fromUtf8("list2"));
        list2->setGeometry(QRect(120, 230, 761, 301));
        list2->setFont(font);
        list2->setFrameShape(QFrame::Box);
        list2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_6 = new QLabel(Form);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 200, 68, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_7 = new QLabel(Form);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(427, 200, 91, 21));
        label_7->setFont(font1);
        radioButton = new QRadioButton(Form);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(0, 370, 111, 19));
        radioButton->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Microsoft YaHei UI\";"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\345\205\263\351\224\256\345\255\227\345\206\205\345\256\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\345\205\263\351\224\256\345\255\227\344\270\252\346\225\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\345\205\263\351\224\256\345\255\227\344\275\215\347\275\256\357\274\232", nullptr));
        selectButton->setText(QCoreApplication::translate("Form", "\346\237\245\350\257\242", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\346\226\207\347\253\240\345\255\227\346\225\260\357\274\232", nullptr));
        countLabel->setText(QCoreApplication::translate("Form", " TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "\346\226\207\344\273\266\346\243\200\347\264\242", nullptr));
        returnButton->setText(QString());
        label_6->setText(QCoreApplication::translate("Form", "\350\241\214\345\217\267", nullptr));
        label_7->setText(QCoreApplication::translate("Form", "\345\206\205\345\256\271", nullptr));
        radioButton->setText(QCoreApplication::translate("Form", "\344\270\215\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
