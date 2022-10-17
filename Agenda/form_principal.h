#ifndef FORM_PRINCIPAL_H
#define FORM_PRINCIPAL_H

#include <QDialog>
#include "form_contatos.h"

namespace Ui {
class form_principal;
}

class form_principal : public QDialog
{
    Q_OBJECT

public:
    explicit form_principal(QWidget *parent = nullptr);
    ~form_principal();

private slots:
    void on_btn_novocontato_clicked();

private:
    Ui::form_principal *ui;
};

#endif // FORM_PRINCIPAL_H
