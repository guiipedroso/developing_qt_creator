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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rb_cpp;
    QRadioButton *rb_php;
    QRadioButton *rb_python;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_vermelho;
    QRadioButton *rb_preto;
    QRadioButton *rb_azul;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rb_barco;
    QRadioButton *rb_jato;
    QRadioButton *rb_carro;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, 90, 136, 125));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rb_cpp = new QRadioButton(groupBox);
        rb_cpp->setObjectName(QString::fromUtf8("rb_cpp"));

        verticalLayout_2->addWidget(rb_cpp);

        rb_php = new QRadioButton(groupBox);
        rb_php->setObjectName(QString::fromUtf8("rb_php"));

        verticalLayout_2->addWidget(rb_php);

        rb_python = new QRadioButton(groupBox);
        rb_python->setObjectName(QString::fromUtf8("rb_python"));

        verticalLayout_2->addWidget(rb_python);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 260, 89, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 114, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rb_vermelho = new QRadioButton(widget);
        rb_vermelho->setObjectName(QString::fromUtf8("rb_vermelho"));

        verticalLayout->addWidget(rb_vermelho);

        rb_preto = new QRadioButton(widget);
        rb_preto->setObjectName(QString::fromUtf8("rb_preto"));

        verticalLayout->addWidget(rb_preto);

        rb_azul = new QRadioButton(widget);
        rb_azul->setObjectName(QString::fromUtf8("rb_azul"));

        verticalLayout->addWidget(rb_azul);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 220, 66, 83));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        rb_barco = new QRadioButton(widget1);
        rb_barco->setObjectName(QString::fromUtf8("rb_barco"));

        verticalLayout_3->addWidget(rb_barco);

        rb_jato = new QRadioButton(widget1);
        rb_jato->setObjectName(QString::fromUtf8("rb_jato"));

        verticalLayout_3->addWidget(rb_jato);

        rb_carro = new QRadioButton(widget1);
        rb_carro->setObjectName(QString::fromUtf8("rb_carro"));

        verticalLayout_3->addWidget(rb_carro);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Languages", nullptr));
        rb_cpp->setText(QApplication::translate("MainWindow", "C++", nullptr));
        rb_php->setText(QApplication::translate("MainWindow", "PHP", nullptr));
        rb_python->setText(QApplication::translate("MainWindow", "Python", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Verify", nullptr));
        rb_vermelho->setText(QApplication::translate("MainWindow", "Vermelho", nullptr));
        rb_preto->setText(QApplication::translate("MainWindow", "Preto", nullptr));
        rb_azul->setText(QApplication::translate("MainWindow", "Azul", nullptr));
        rb_barco->setText(QApplication::translate("MainWindow", "Barco", nullptr));
        rb_jato->setText(QApplication::translate("MainWindow", "Jato", nullptr));
        rb_carro->setText(QApplication::translate("MainWindow", "Carro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
