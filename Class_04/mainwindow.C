#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

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
    QMessageBox::StandardButton retorno = QMessageBox::question(this, "Pop-up","Do you want married with me?",QMessageBox::Yes | QMessageBox::No);

    if(retorno == QMessageBox::Yes)
      {
      /* or
       close();
      */
      QApplication::quit();
      }
    else
      {
      printf("No, denied\n"); // Só aparece no console após o programa terminar
      QMessageBox::about(this, "Question", "Request Denied");
      qDebug() << "Request Denied"; // Aparece no console em tempo de execução
      }
}

