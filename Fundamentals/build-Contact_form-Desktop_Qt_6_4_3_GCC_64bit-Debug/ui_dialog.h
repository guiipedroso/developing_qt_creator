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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_logo;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_dialog_name;
    QLabel *label_dialog_last;
    QLabel *label_dialog_email;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 20, 151, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label_logo = new QLabel(Dialog);
        label_logo->setObjectName("label_logo");
        label_logo->setGeometry(QRect(80, 170, 281, 51));
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 60, 291, 81));
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

        widget1 = new QWidget(Dialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(60, 230, 321, 41));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Seus dados s\303\243o:", nullptr));
        label_logo->setText(QString());
        label_dialog_name->setText(QString());
        label_dialog_last->setText(QString());
        label_dialog_email->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog", "Limpar Imagem", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Mostrar Imagem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
