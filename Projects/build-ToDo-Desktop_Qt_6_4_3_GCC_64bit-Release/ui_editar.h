/********************************************************************************
** Form generated from reading UI file 'editar.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAR_H
#define UI_EDITAR_H

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

class Ui_Editar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_editar;
    QPushButton *btn_excluir;

    void setupUi(QDialog *Editar)
    {
        if (Editar->objectName().isEmpty())
            Editar->setObjectName("Editar");
        Editar->resize(586, 233);
        widget = new QWidget(Editar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 30, 511, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_editar = new QPushButton(widget);
        btn_editar->setObjectName("btn_editar");

        horizontalLayout_2->addWidget(btn_editar);

        btn_excluir = new QPushButton(widget);
        btn_excluir->setObjectName("btn_excluir");

        horizontalLayout_2->addWidget(btn_excluir);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Editar);

        QMetaObject::connectSlotsByName(Editar);
    } // setupUi

    void retranslateUi(QDialog *Editar)
    {
        Editar->setWindowTitle(QCoreApplication::translate("Editar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Editar", "ID", nullptr));
        btn_editar->setText(QCoreApplication::translate("Editar", "Editar", nullptr));
        btn_excluir->setText(QCoreApplication::translate("Editar", "Excluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editar: public Ui_Editar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAR_H
