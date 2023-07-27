#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:white ; color:black;");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_send_clicked()
{
    if(ui->line_login->text() == "guiipedroso@gmail.com" && ui->line_senha->text() == "teste123")
      {
        QMessageBox::information(this, "Home", "Sucess login");

        if(ui->check_login->isChecked())
          {
            ui->statusbar->showMessage("Checkbox marcado!");
          }
        else
          {
            ui->statusbar->showMessage("Nao marcado checkbox!");
          }
      }
    else
      {
        ui->statusbar->showMessage("Failed login");
        ui->line_login->clear();
        ui->line_senha->clear();
      }

}


void MainWindow::on_check_login_stateChanged(int arg1)
{
      if(arg1 > 0)
      {
        ui->statusbar->showMessage("Checkbox marcado!");
      }
      else
      {
        ui->statusbar->showMessage("Nao marcado checkbox!");
      }
}

