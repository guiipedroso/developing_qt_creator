#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "janela.h"

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
  /* 1° attempt
    janela form;
    form.exec();
  */
  form = new janela(this);
  form->show();
}
