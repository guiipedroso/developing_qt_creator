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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionNovo;
    QAction *actionSalvar;
    QAction *actionExibir;
    QAction *actionSair;
    QAction *actionPesquisar;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuFerramentas;
    QMenu *menuHelp;
    QMenu *menuHelp_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(821, 479);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/icons8-add-file-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/icons8-save-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon1);
        actionExibir = new QAction(MainWindow);
        actionExibir->setObjectName(QString::fromUtf8("actionExibir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/icons8-edit-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExibir->setIcon(icon2);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/icons8-trash-can-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon3);
        actionPesquisar = new QAction(MainWindow);
        actionPesquisar->setObjectName(QString::fromUtf8("actionPesquisar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/icons8-search-more-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPesquisar->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/images/art.png")));
        label_2->setScaledContents(true);

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 821, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuFerramentas = new QMenu(menubar);
        menuFerramentas->setObjectName(QString::fromUtf8("menuFerramentas"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp_2 = new QMenu(menubar);
        menuHelp_2->setObjectName(QString::fromUtf8("menuHelp_2"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuFerramentas->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuHelp_2->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(actionNovo);
        menuMenu->addAction(actionSalvar);
        menuMenu->addAction(actionExibir);
        menuMenu->addAction(actionSair);
        menuFerramentas->addAction(actionPesquisar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNovo->setText(QApplication::translate("MainWindow", "Novo", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        actionExibir->setText(QApplication::translate("MainWindow", "Editar", nullptr));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        actionPesquisar->setText(QApplication::translate("MainWindow", "Pesquisar", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><h2 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">P.A.I - Redes Neurais Artificiais</span></h2></body></html>", nullptr));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Come\303\247ar", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Op\303\247\303\265es", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        menuFerramentas->setTitle(QApplication::translate("MainWindow", "Ferramentas", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuHelp_2->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
