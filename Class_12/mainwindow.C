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


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->user->text();
    QString password = ui->pass->text();

    if((username == "pedroso")&&(password == "h3llow0rld"))
      {
      QMessageBox::information(this, "Login", "Accept acess");
      }
    else
      {
      QMessageBox::warning(this, "Login", "Username or password incorrect");
      }
    ui->user->clear();
    ui->pass->clear();
    ui->user->setFocus();
}
