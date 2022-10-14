/********************************************************************************
** Form generated from reading UI file 'janela3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA3_H
#define UI_JANELA3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_janela3
{
public:
    QLabel *label;

    void setupUi(QDialog *janela3)
    {
        if (janela3->objectName().isEmpty())
            janela3->setObjectName(QString::fromUtf8("janela3"));
        janela3->resize(400, 300);
        label = new QLabel(janela3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 67, 17));

        retranslateUi(janela3);

        QMetaObject::connectSlotsByName(janela3);
    } // setupUi

    void retranslateUi(QDialog *janela3)
    {
        janela3->setWindowTitle(QApplication::translate("janela3", "Dialog", nullptr));
        label->setText(QApplication::translate("janela3", "janela 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela3: public Ui_janela3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA3_H
