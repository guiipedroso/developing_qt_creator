#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white; color: black;");
}

void Dialog::show_data(QString name, QString last, QString email)
{
    ui->label_dialog_name->setText( name );
    ui->label_dialog_last->setText( last );
    ui->label_dialog_email->setText( email );
}

Dialog::~Dialog()
{
    delete ui;
}
