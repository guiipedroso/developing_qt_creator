#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_mostrar_clicked()
{
  QString name = ui->txt_name->text();
  QString phone = ui->txt_phone->text();
  QString email = ui->txt_email->text();
  QMessageBox::information(this,"Database","Name: " +name+"\nPhone: " +phone+ "\nE-mail: " +email);
}


void MainWindow::on_limpar_clicked()
{
    //limpando os campos
    ui->txt_name->clear();
    ui->txt_phone->clear();
    ui->txt_email->clear();
    //reposicionando os cursores
    ui->txt_name->setFocus();
}

