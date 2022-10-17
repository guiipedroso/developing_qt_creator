#include "form_principal.h"
#include "ui_form_principal.h"

form_principal::form_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_principal)
{
    ui->setupUi(this);
}

form_principal::~form_principal()
{
    delete ui;
}

void form_principal::on_btn_novocontato_clicked()
{
    form_contatos f_contatos;
    f_contatos.exec();
}

