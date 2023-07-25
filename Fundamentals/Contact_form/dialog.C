#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white; color: black;");

    QPixmap logo("/home/pedroso/Documentos/Projects/developing_qt_creator/Fundamentals/Contact_form/WindowsXP.jpg");
   // ui->label_logo->setPixmap(logo);
    ui->label_logo->setPixmap( logo.scaled(192,58, Qt::KeepAspectRatio));
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

void Dialog::on_pushButton_clicked()
{
    ui->label_logo->clear();
}

void Dialog::on_pushButton_2_clicked()
{
    QPixmap logo("/home/pedroso/Documentos/Projects/developing_qt_creator/Fundamentals/Contact_form/WindowsXP.jpg");
    ui->label_logo->setPixmap(logo);
}

