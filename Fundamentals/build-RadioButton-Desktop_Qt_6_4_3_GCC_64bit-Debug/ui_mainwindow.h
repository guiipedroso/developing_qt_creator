/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_anwser;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_op1;
    QRadioButton *rb_op2;
    QRadioButton *rb_op3;
    QRadioButton *rb_op4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_resposta;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 251, 181));
        label_anwser = new QLabel(centralwidget);
        label_anwser->setObjectName("label_anwser");
        label_anwser->setGeometry(QRect(80, 420, 231, 61));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 190, 221, 161));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        rb_op1 = new QRadioButton(widget);
        rb_op1->setObjectName("rb_op1");

        verticalLayout->addWidget(rb_op1);

        rb_op2 = new QRadioButton(widget);
        rb_op2->setObjectName("rb_op2");

        verticalLayout->addWidget(rb_op2);

        rb_op3 = new QRadioButton(widget);
        rb_op3->setObjectName("rb_op3");

        verticalLayout->addWidget(rb_op3);

        rb_op4 = new QRadioButton(widget);
        rb_op4->setObjectName("rb_op4");

        verticalLayout->addWidget(rb_op4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_resposta = new QPushButton(widget);
        btn_resposta->setObjectName("btn_resposta");

        horizontalLayout->addWidget(btn_resposta);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<h1>Question 1</h1>\n"
"<h3>Qual seu sistema Operacional</h3>", nullptr));
        label_anwser->setText(QString());
        rb_op1->setText(QCoreApplication::translate("MainWindow", "Linux", nullptr));
        rb_op2->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        rb_op3->setText(QCoreApplication::translate("MainWindow", "macOS", nullptr));
        rb_op4->setText(QCoreApplication::translate("MainWindow", "FreeBSD", nullptr));
        btn_resposta->setText(QCoreApplication::translate("MainWindow", "Responder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
