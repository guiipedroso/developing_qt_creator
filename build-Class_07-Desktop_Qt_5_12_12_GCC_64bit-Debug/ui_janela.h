/********************************************************************************
** Form generated from reading UI file 'janela.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_H
#define UI_JANELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_janela
{
public:
    QLabel *label;

    void setupUi(QDialog *janela)
    {
        if (janela->objectName().isEmpty())
            janela->setObjectName(QString::fromUtf8("janela"));
        janela->resize(400, 300);
        label = new QLabel(janela);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 67, 17));

        retranslateUi(janela);

        QMetaObject::connectSlotsByName(janela);
    } // setupUi

    void retranslateUi(QDialog *janela)
    {
        janela->setWindowTitle(QApplication::translate("janela", "Dialog", nullptr));
        label->setText(QApplication::translate("janela", "JANELA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela: public Ui_janela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_H
