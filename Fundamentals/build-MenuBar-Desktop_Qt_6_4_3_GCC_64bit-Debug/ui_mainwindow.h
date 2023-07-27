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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRemover;
    QAction *actionRemover_2;
    QAction *actionMudar;
    QAction *actionSalvar;
    QAction *actionSair;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionRemover = new QAction(MainWindow);
        actionRemover->setObjectName("actionRemover");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemover->setIcon(icon);
        actionRemover_2 = new QAction(MainWindow);
        actionRemover_2->setObjectName("actionRemover_2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemover_2->setIcon(icon1);
        actionMudar = new QAction(MainWindow);
        actionMudar->setObjectName("actionMudar");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/3d bar chart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMudar->setIcon(icon2);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName("actionSalvar");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Load.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon3);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName("actionSair");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/New document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName("menuEditar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menuArquivo->addAction(actionRemover);
        menuArquivo->addAction(actionRemover_2);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSair);
        menuEditar->addAction(actionMudar);
        toolBar->addAction(actionRemover);
        toolBar->addAction(actionRemover_2);
        toolBar->addAction(actionMudar);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionSair);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRemover->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        actionRemover_2->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        actionMudar->setText(QCoreApplication::translate("MainWindow", "Mudar", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
