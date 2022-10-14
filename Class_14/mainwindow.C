#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

QString msg = ""; //global
QString msg1, msg2, msg3;
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
    bool cb1, cb2, cb3;

    cb1 = ui->checkBox->isChecked();
    cb2 = ui->checkBox_2->isChecked();
    cb3 = ui->checkBox_3->isChecked();

    msg = "";
    if(cb1)
      {
      msg += "CB1 check, ";
      }
    if(cb2)
      {
      msg += "CB2 check, ";
      }
    if(cb3)
      {
      msg += "CB3 check";
      }

    QMessageBox::information(this, "Checkboxes", msg);
}


void MainWindow::on_pushButton_2_clicked()
{
    bool cb[3] = {0,0,0};
    cb[0] = ui->checkBox->isChecked();
    cb[1] = ui->checkBox_2->isChecked();
    cb[2] = ui->checkBox_3->isChecked();

    msg = "";

    for(int i = 0; i < 3; i++)
      {
      if(cb[i])
         {
         msg += "CB"+QString::number(i+1)+" check ";
         qDebug() << "Entrei";
         }
      }
    QMessageBox::information(this, "Checkboxes", msg);
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    msg1 = "";
    if(arg1)
      {
      msg1 += "CB1 check";
      }
    else
      {
      msg1 += "";
      }
}

void MainWindow::on_checkBox_2_stateChanged(int arg2)
{
    msg2 = "";

    if(arg2)
      {
      msg2 += " CB2 check ";
      }
    else
      {
      msg2 += "";
      }
}

void MainWindow::on_checkBox_3_stateChanged(int arg3)
{
    msg3 = "";

    if(arg3)
      {
      msg3 += " CB3 check ";
      }
    else
      {
      msg3 += "";
      }
}

void MainWindow::on_pushButton_3_clicked()
{
    msg = msg1+msg2+msg3;
    QMessageBox::information(this, "Checkboxes", msg);
}

