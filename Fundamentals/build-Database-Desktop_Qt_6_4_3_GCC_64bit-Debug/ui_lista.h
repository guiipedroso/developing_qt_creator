/********************************************************************************
** Form generated from reading UI file 'lista.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTA_H
#define UI_LISTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Lista
{
public:

    void setupUi(QDialog *Lista)
    {
        if (Lista->objectName().isEmpty())
            Lista->setObjectName("Lista");
        Lista->resize(594, 398);

        retranslateUi(Lista);

        QMetaObject::connectSlotsByName(Lista);
    } // setupUi

    void retranslateUi(QDialog *Lista)
    {
        Lista->setWindowTitle(QCoreApplication::translate("Lista", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lista: public Ui_Lista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTA_H
