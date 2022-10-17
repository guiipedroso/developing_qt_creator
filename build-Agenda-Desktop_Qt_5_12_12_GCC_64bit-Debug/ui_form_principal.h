/********************************************************************************
** Form generated from reading UI file 'form_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_PRINCIPAL_H
#define UI_FORM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_form_principal
{
public:
    QPushButton *btn_novocontato;
    QPushButton *btn_pesquisarcontato;

    void setupUi(QDialog *form_principal)
    {
        if (form_principal->objectName().isEmpty())
            form_principal->setObjectName(QString::fromUtf8("form_principal"));
        form_principal->resize(400, 300);
        btn_novocontato = new QPushButton(form_principal);
        btn_novocontato->setObjectName(QString::fromUtf8("btn_novocontato"));
        btn_novocontato->setGeometry(QRect(10, 40, 141, 25));
        btn_pesquisarcontato = new QPushButton(form_principal);
        btn_pesquisarcontato->setObjectName(QString::fromUtf8("btn_pesquisarcontato"));
        btn_pesquisarcontato->setGeometry(QRect(160, 40, 141, 25));

        retranslateUi(form_principal);

        QMetaObject::connectSlotsByName(form_principal);
    } // setupUi

    void retranslateUi(QDialog *form_principal)
    {
        form_principal->setWindowTitle(QApplication::translate("form_principal", "Dialog", nullptr));
        btn_novocontato->setText(QApplication::translate("form_principal", "Adicionar contato", nullptr));
        btn_pesquisarcontato->setText(QApplication::translate("form_principal", "Pesquisar contato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_principal: public Ui_form_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_PRINCIPAL_H
