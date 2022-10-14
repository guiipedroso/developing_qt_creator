/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionSalvar_2;
    QAction *actionEditar;
    QAction *actionSair;
    QAction *actionPesquisar;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(534, 353);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/cursors/icons8-add-file-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon);
        actionSalvar_2 = new QAction(MainWindow);
        actionSalvar_2->setObjectName(QString::fromUtf8("actionSalvar_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/cursors/icons8-save-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar_2->setIcon(icon1);
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/cursors/icons8-edit-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditar->setIcon(icon2);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/cursors/icons8-trash-can-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon3);
        actionPesquisar = new QAction(MainWindow);
        actionPesquisar->setObjectName(QString::fromUtf8("actionPesquisar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/cursors/icons8-search-more-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPesquisar->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 534, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_2);
        menuArquivo->addAction(actionEditar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuEditar->addAction(actionPesquisar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Novo", nullptr));
        actionSalvar_2->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        actionEditar->setText(QApplication::translate("MainWindow", "Editar", nullptr));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        actionPesquisar->setText(QApplication::translate("MainWindow", "Pesquisar", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
