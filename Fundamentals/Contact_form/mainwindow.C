#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Main Form");
    this->setStyleSheet("background-color: white; color: black;");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_send_clicked()
{
    QString name, lastname, email;

    name = ui->field_name->text();
    lastname = ui->field_last->text();
    email = ui->field_email->text();

    Dialog dados; //instanciando Dialog
    dados.show_data(name,lastname,email);
    dados.exec();

    //QMessageBox::about(this, "Forms", "Nome: " + name + """\nSobrenome: "+lastname+"\nEmail: "+email);

    ui->label_name->setFocus();
    ui->label_last->setFocus();
    ui->label_email->setFocus();

}

