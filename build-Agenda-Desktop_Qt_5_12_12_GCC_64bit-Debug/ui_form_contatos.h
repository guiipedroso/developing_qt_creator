/********************************************************************************
** Form generated from reading UI file 'form_contatos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CONTATOS_H
#define UI_FORM_CONTATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_contatos
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *form_contatos)
    {
        if (form_contatos->objectName().isEmpty())
            form_contatos->setObjectName(QString::fromUtf8("form_contatos"));
        form_contatos->resize(400, 300);
        widget = new QWidget(form_contatos);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 361, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QString::fromUtf8("txt_telefone"));

        horizontalLayout_2->addWidget(txt_telefone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName(QString::fromUtf8("txt_email"));

        horizontalLayout_3->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_gravar = new QPushButton(widget);
        btn_gravar->setObjectName(QString::fromUtf8("btn_gravar"));

        horizontalLayout_4->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_4->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(form_contatos);

        QMetaObject::connectSlotsByName(form_contatos);
    } // setupUi

    void retranslateUi(QDialog *form_contatos)
    {
        form_contatos->setWindowTitle(QApplication::translate("form_contatos", "Dialog", nullptr));
        label->setText(QApplication::translate("form_contatos", "Nome", nullptr));
        label_2->setText(QApplication::translate("form_contatos", "Telefone", nullptr));
        label_3->setText(QApplication::translate("form_contatos", "E-mail", nullptr));
        btn_gravar->setText(QApplication::translate("form_contatos", "Gravar", nullptr));
        btn_cancelar->setText(QApplication::translate("form_contatos", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_contatos: public Ui_form_contatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CONTATOS_H
