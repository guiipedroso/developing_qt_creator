/********************************************************************************
** Form generated from reading UI file 'form_new.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_NEW_H
#define UI_FORM_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_form_new
{
public:
    QLabel *label;

    void setupUi(QDialog *form_new)
    {
        if (form_new->objectName().isEmpty())
            form_new->setObjectName(QString::fromUtf8("form_new"));
        form_new->resize(400, 300);
        label = new QLabel(form_new);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 90, 231, 111));

        retranslateUi(form_new);

        QMetaObject::connectSlotsByName(form_new);
    } // setupUi

    void retranslateUi(QDialog *form_new)
    {
        form_new->setWindowTitle(QApplication::translate("form_new", "Dialog", nullptr));
        label->setText(QApplication::translate("form_new", "<h1>Formul\303\241rio novo</h1>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_new: public Ui_form_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_NEW_H
