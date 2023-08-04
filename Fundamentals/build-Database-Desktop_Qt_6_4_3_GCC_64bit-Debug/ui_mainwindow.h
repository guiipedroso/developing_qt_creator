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
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *nome;
    QLineEdit *ln_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sobrenome;
    QLineEdit *ln_sobrenome;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(664, 387);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 60, 571, 241));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        nome = new QLabel(widget);
        nome->setObjectName("nome");

        horizontalLayout->addWidget(nome);

        ln_nome = new QLineEdit(widget);
        ln_nome->setObjectName("ln_nome");

        horizontalLayout->addWidget(ln_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sobrenome = new QLabel(widget);
        sobrenome->setObjectName("sobrenome");

        horizontalLayout_2->addWidget(sobrenome);

        ln_sobrenome = new QLineEdit(widget);
        ln_sobrenome->setObjectName("ln_sobrenome");

        horizontalLayout_2->addWidget(ln_sobrenome);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_3->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 664, 22));
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
        nome->setText(QCoreApplication::translate("MainWindow", "Nome: ", nullptr));
        sobrenome->setText(QCoreApplication::translate("MainWindow", "Sobrenome:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Ver todos os cadatrados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
