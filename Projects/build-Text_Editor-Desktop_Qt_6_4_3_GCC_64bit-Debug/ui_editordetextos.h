/********************************************************************************
** Form generated from reading UI file 'editordetextos.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORDETEXTOS_H
#define UI_EDITORDETEXTOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorDeTextos
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_como;
    QAction *actionCopiar;
    QAction *actionColar;
    QAction *actionRecortar;
    QAction *actionRefazer;
    QAction *actionDesfazer;
    QAction *actionSair;
    QAction *actionCor;
    QAction *actionBackground;
    QAction *actionFonte;
    QAction *actionSobre_Devs;
    QAction *actionImprimir;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuFormatar;
    QMenu *menuSobre;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *EditorDeTextos)
    {
        if (EditorDeTextos->objectName().isEmpty())
            EditorDeTextos->setObjectName("EditorDeTextos");
        EditorDeTextos->resize(802, 579);
        actionNovo = new QAction(EditorDeTextos);
        actionNovo->setObjectName("actionNovo");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons-text-edit/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionAbrir = new QAction(EditorDeTextos);
        actionAbrir->setObjectName("actionAbrir");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons-text-edit/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionSalvar = new QAction(EditorDeTextos);
        actionSalvar->setObjectName("actionSalvar");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons-text-edit/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon2);
        actionSalvar_como = new QAction(EditorDeTextos);
        actionSalvar_como->setObjectName("actionSalvar_como");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons-text-edit/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar_como->setIcon(icon3);
        actionCopiar = new QAction(EditorDeTextos);
        actionCopiar->setObjectName("actionCopiar");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons-text-edit/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon4);
        actionColar = new QAction(EditorDeTextos);
        actionColar->setObjectName("actionColar");
        actionColar->setIcon(icon3);
        actionRecortar = new QAction(EditorDeTextos);
        actionRecortar->setObjectName("actionRecortar");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons-text-edit/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecortar->setIcon(icon5);
        actionRefazer = new QAction(EditorDeTextos);
        actionRefazer->setObjectName("actionRefazer");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons-text-edit/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefazer->setIcon(icon6);
        actionDesfazer = new QAction(EditorDeTextos);
        actionDesfazer->setObjectName("actionDesfazer");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons-text-edit/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesfazer->setIcon(icon7);
        actionSair = new QAction(EditorDeTextos);
        actionSair->setObjectName("actionSair");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons-text-edit/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon8);
        actionCor = new QAction(EditorDeTextos);
        actionCor->setObjectName("actionCor");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons-text-edit/cor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCor->setIcon(icon9);
        actionBackground = new QAction(EditorDeTextos);
        actionBackground->setObjectName("actionBackground");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons-text-edit/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground->setIcon(icon10);
        actionFonte = new QAction(EditorDeTextos);
        actionFonte->setObjectName("actionFonte");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons-text-edit/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFonte->setIcon(icon11);
        actionSobre_Devs = new QAction(EditorDeTextos);
        actionSobre_Devs->setObjectName("actionSobre_Devs");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons-text-edit/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre_Devs->setIcon(icon12);
        actionImprimir = new QAction(EditorDeTextos);
        actionImprimir->setObjectName("actionImprimir");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons-text-edit/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon13);
        centralwidget = new QWidget(EditorDeTextos);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 10, 761, 481));
        EditorDeTextos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditorDeTextos);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 802, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName("menuEditar");
        menuFormatar = new QMenu(menubar);
        menuFormatar->setObjectName("menuFormatar");
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName("menuSobre");
        EditorDeTextos->setMenuBar(menubar);
        statusbar = new QStatusBar(EditorDeTextos);
        statusbar->setObjectName("statusbar");
        EditorDeTextos->setStatusBar(statusbar);
        toolBar = new QToolBar(EditorDeTextos);
        toolBar->setObjectName("toolBar");
        toolBar->setMovable(false);
        EditorDeTextos->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuFormatar->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addAction(actionSair);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionColar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addAction(actionRefazer);
        menuEditar->addAction(actionDesfazer);
        menuFormatar->addAction(actionCor);
        menuFormatar->addAction(actionBackground);
        menuFormatar->addAction(actionFonte);
        menuSobre->addAction(actionSobre_Devs);
        toolBar->addAction(actionNovo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionSalvar_como);
        toolBar->addAction(actionRecortar);
        toolBar->addAction(actionRefazer);
        toolBar->addAction(actionDesfazer);

        retranslateUi(EditorDeTextos);

        QMetaObject::connectSlotsByName(EditorDeTextos);
    } // setupUi

    void retranslateUi(QMainWindow *EditorDeTextos)
    {
        EditorDeTextos->setWindowTitle(QCoreApplication::translate("EditorDeTextos", "EditorDeTextos", nullptr));
        actionNovo->setText(QCoreApplication::translate("EditorDeTextos", "Novo", nullptr));
#if QT_CONFIG(shortcut)
        actionNovo->setShortcut(QCoreApplication::translate("EditorDeTextos", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbrir->setText(QCoreApplication::translate("EditorDeTextos", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("EditorDeTextos", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalvar->setText(QCoreApplication::translate("EditorDeTextos", "Salvar", nullptr));
#if QT_CONFIG(shortcut)
        actionSalvar->setShortcut(QCoreApplication::translate("EditorDeTextos", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalvar_como->setText(QCoreApplication::translate("EditorDeTextos", "Salvar como", nullptr));
        actionCopiar->setText(QCoreApplication::translate("EditorDeTextos", "Copiar", nullptr));
#if QT_CONFIG(shortcut)
        actionCopiar->setShortcut(QCoreApplication::translate("EditorDeTextos", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColar->setText(QCoreApplication::translate("EditorDeTextos", "Colar", nullptr));
#if QT_CONFIG(shortcut)
        actionColar->setShortcut(QCoreApplication::translate("EditorDeTextos", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecortar->setText(QCoreApplication::translate("EditorDeTextos", "Recortar", nullptr));
#if QT_CONFIG(shortcut)
        actionRecortar->setShortcut(QCoreApplication::translate("EditorDeTextos", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRefazer->setText(QCoreApplication::translate("EditorDeTextos", "Refazer", nullptr));
        actionDesfazer->setText(QCoreApplication::translate("EditorDeTextos", "Desfazer", nullptr));
#if QT_CONFIG(shortcut)
        actionDesfazer->setShortcut(QCoreApplication::translate("EditorDeTextos", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSair->setText(QCoreApplication::translate("EditorDeTextos", "Sair", nullptr));
        actionCor->setText(QCoreApplication::translate("EditorDeTextos", "Cor", nullptr));
        actionBackground->setText(QCoreApplication::translate("EditorDeTextos", "Background", nullptr));
        actionFonte->setText(QCoreApplication::translate("EditorDeTextos", "Fonte", nullptr));
        actionSobre_Devs->setText(QCoreApplication::translate("EditorDeTextos", "Sobre Devs", nullptr));
        actionImprimir->setText(QCoreApplication::translate("EditorDeTextos", "Imprimir", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("EditorDeTextos", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("EditorDeTextos", "Editar", nullptr));
        menuFormatar->setTitle(QCoreApplication::translate("EditorDeTextos", "Formatar", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("EditorDeTextos", "Sobre", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("EditorDeTextos", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorDeTextos: public Ui_EditorDeTextos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORDETEXTOS_H
