#include "form_new.h"
#include "ui_form_new.h"

form_new::form_new(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_new)
{
    ui->setupUi(this);
}

form_new::~form_new()
{
    delete ui;
}
