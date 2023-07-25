/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_dialog_name;
    QLabel *label_dialog_last;
    QLabel *label_dialog_email;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 70, 151, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 110, 291, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_dialog_name = new QLabel(widget);
        label_dialog_name->setObjectName("label_dialog_name");

        verticalLayout->addWidget(label_dialog_name);

        label_dialog_last = new QLabel(widget);
        label_dialog_last->setObjectName("label_dialog_last");

        verticalLayout->addWidget(label_dialog_last);

        label_dialog_email = new QLabel(widget);
        label_dialog_email->setObjectName("label_dialog_email");

        verticalLayout->addWidget(label_dialog_email);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Seus dados s\303\243o:", nullptr));
        label_dialog_name->setText(QString());
        label_dialog_last->setText(QString());
        label_dialog_email->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
