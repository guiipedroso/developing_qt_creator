/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName(QString::fromUtf8("JanelaLogin"));
        JanelaLogin->resize(657, 357);
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 250, 501, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 12, 631, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(27, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        txt_senha = new QLineEdit(widget);
        txt_senha->setObjectName(QString::fromUtf8("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        horizontalLayout_3->addWidget(btn_login);


        verticalLayout->addLayout(horizontalLayout_3);

        JanelaLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaLogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 657, 22));
        JanelaLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JanelaLogin->setStatusBar(statusbar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        label->setText(QApplication::translate("JanelaLogin", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("JanelaLogin", "Username", nullptr));
        label_3->setText(QApplication::translate("JanelaLogin", "Senha", nullptr));
        btn_login->setText(QApplication::translate("JanelaLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
