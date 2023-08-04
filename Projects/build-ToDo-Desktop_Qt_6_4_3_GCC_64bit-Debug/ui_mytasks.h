/********************************************************************************
** Form generated from reading UI file 'mytasks.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTASKS_H
#define UI_MYTASKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTasks
{
public:
    QAction *actionSair;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *label;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *btn_adicionar;
    QMenuBar *menubar;
    QMenu *menuAquivo;
    QMenu *menuSobre;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MyTasks)
    {
        if (MyTasks->objectName().isEmpty())
            MyTasks->setObjectName("MyTasks");
        MyTasks->resize(701, 502);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/fazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        MyTasks->setWindowIcon(icon);
        actionSair = new QAction(MyTasks);
        actionSair->setObjectName("actionSair");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/desligar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon1);
        actionAbout = new QAction(MyTasks);
        actionAbout->setObjectName("actionAbout");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        centralwidget = new QWidget(MyTasks);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 140, 441, 51));
        label->setStyleSheet(QString::fromUtf8("Meu Programa"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 50, 661, 361));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 661, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        btn_adicionar = new QPushButton(widget);
        btn_adicionar->setObjectName("btn_adicionar");

        horizontalLayout->addWidget(btn_adicionar);

        MyTasks->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyTasks);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 701, 22));
        menuAquivo = new QMenu(menubar);
        menuAquivo->setObjectName("menuAquivo");
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName("menuSobre");
        MyTasks->setMenuBar(menubar);
        statusbar = new QStatusBar(MyTasks);
        statusbar->setObjectName("statusbar");
        MyTasks->setStatusBar(statusbar);
        toolBar = new QToolBar(MyTasks);
        toolBar->setObjectName("toolBar");
        MyTasks->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuAquivo->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuAquivo->addAction(actionSair);
        menuSobre->addAction(actionAbout);
        toolBar->addAction(actionSair);
        toolBar->addAction(actionAbout);

        retranslateUi(MyTasks);

        QMetaObject::connectSlotsByName(MyTasks);
    } // setupUi

    void retranslateUi(QMainWindow *MyTasks)
    {
        MyTasks->setWindowTitle(QCoreApplication::translate("MyTasks", "MyTasks", nullptr));
        actionSair->setText(QCoreApplication::translate("MyTasks", "Sair", nullptr));
        actionAbout->setText(QCoreApplication::translate("MyTasks", "About", nullptr));
        label->setText(QString());
        btn_adicionar->setText(QCoreApplication::translate("MyTasks", "Adicionar", nullptr));
        menuAquivo->setTitle(QCoreApplication::translate("MyTasks", "Aquivo", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MyTasks", "Sobre", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MyTasks", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTasks: public Ui_MyTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTASKS_H
