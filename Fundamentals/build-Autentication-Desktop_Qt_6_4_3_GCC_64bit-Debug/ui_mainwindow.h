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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *login;
    QLineEdit *line_login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *senha;
    QLineEdit *line_senha;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *check_login;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(625, 381);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 30, 71, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 90, 471, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        login = new QLabel(layoutWidget);
        login->setObjectName("login");

        horizontalLayout->addWidget(login);

        line_login = new QLineEdit(layoutWidget);
        line_login->setObjectName("line_login");

        horizontalLayout->addWidget(line_login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        senha = new QLabel(layoutWidget);
        senha->setObjectName("senha");

        horizontalLayout_2->addWidget(senha);

        line_senha = new QLineEdit(layoutWidget);
        line_senha->setObjectName("line_senha");
        line_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(line_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        check_login = new QCheckBox(layoutWidget);
        check_login->setObjectName("check_login");

        horizontalLayout_3->addWidget(check_login);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_send = new QPushButton(layoutWidget);
        btn_send->setObjectName("btn_send");

        horizontalLayout_3->addWidget(btn_send);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 625, 22));
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
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login:", nullptr));
        senha->setText(QCoreApplication::translate("MainWindow", "Senha:", nullptr));
        check_login->setText(QCoreApplication::translate("MainWindow", "Mantenha logado", nullptr));
        btn_send->setText(QCoreApplication::translate("MainWindow", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
