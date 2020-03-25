/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *file_check_Button;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *minButton;
    QPushButton *maxButton;
    QPushButton *xButton;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 490);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 130, 521, 201));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        file_check_Button = new QPushButton(widget);
        file_check_Button->setObjectName(QString::fromUtf8("file_check_Button"));
        file_check_Button->setMinimumSize(QSize(170, 85));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        file_check_Button->setFont(font1);
        file_check_Button->setStyleSheet(QString::fromUtf8("#file_check_Button{padding:2px 4px;\n"
"font: 75 15pt \"Consolas\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"background-color: rgb(15, 143, 255);\n"
"border:3px solid ;}\n"
"#file_check_Button:hover{\n"
"background-color: rgb(77, 66, 33);}\n"
""));

        horizontalLayout->addWidget(file_check_Button);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 811, 101));
        widget_2->setStyleSheet(QString::fromUtf8("color: rgb(47, 161, 13);\n"
"background-color: rgb(51, 255, 68);"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 31, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/C:/Users/DELL/Desktop/u=3898612739,1352873222&fm=26&gp=0_meitu_2.jpg")));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 0, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Microsoft JhengHei UI\";\n"
"color: rgb(4, 3, 3);\n"
"font: 75 12pt \"Consolas\";"));
        minButton = new QPushButton(widget_2);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        minButton->setGeometry(QRect(720, 0, 25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/min_meitu_1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        minButton->setIcon(icon);
        minButton->setIconSize(QSize(31, 31));
        maxButton = new QPushButton(widget_2);
        maxButton->setObjectName(QString::fromUtf8("maxButton"));
        maxButton->setGeometry(QRect(750, 0, 25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/max_meitu_3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        maxButton->setIcon(icon1);
        maxButton->setIconSize(QSize(30, 30));
        xButton = new QPushButton(widget_2);
        xButton->setObjectName(QString::fromUtf8("xButton"));
        xButton->setGeometry(QRect(780, 0, 25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/cha_meitu_4.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        xButton->setIcon(icon2);
        xButton->setIconSize(QSize(30, 30));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 440, 511, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        file_check_Button->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\346\243\200\347\264\242", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\241\243\346\243\200\347\264\242\345\231\250", nullptr));
        minButton->setText(QString());
        maxButton->setText(QString());
        xButton->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "superzhaoyang.top", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
