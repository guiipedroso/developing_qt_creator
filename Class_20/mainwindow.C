#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

QString local = "/home/pedroso/Documents/Projects/developing_qt/Class_20/";


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir unidades;
    foreach(QFileInfo qfi,unidades.drives())
      {
        ui->comboBox->addItem(qfi.absoluteFilePath());
      }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->listWidget->clear();
    ui->listWidget->addItem(arg1);
    QDir conteudo(arg1);
    foreach(QFileInfo qfi,conteudo.entryInfoList())
      {
        if(qfi.isDir())
          {
          ui->listWidget->addItem("Pasta: "+ qfi.absoluteFilePath());
          }
        else
          {
          ui->listWidget->addItem("Arquivo: "+qfi.absoluteFilePath());
          }
      }
}


void MainWindow::on_pushButton_2_clicked()
{
    QString local = ui->listWidget->currentItem()->text(); //pegando o local
    //QMessageBox::about(this,"teste", local); // imprimindo para ver se deu certo
    QString nome = "/"+ui->lineEdit->text();
    QDir dir(local+nome);
    // QMessageBox::about(this,"teste", local+nome); //imprimindo novamente para ver
    if(dir.exists())
      {
      QMessageBox::about(this, "pasta", "Diretório já existe");
      }
    else
      {
      dir.mkdir(local+nome);
      ui->listWidget->clear();
      ui->listWidget->addItem(ui->comboBox->currentText());
      QDir conteudo(ui->comboBox->currentText());
      foreach(QFileInfo qfi,conteudo.entryInfoList())
        {
          if(qfi.isDir())
            {
            ui->listWidget->addItem(qfi.absoluteFilePath());
            }
        }

      }
}


void MainWindow::on_pushButton_clicked()
{
    QString local = ui->listWidget->currentItem()->text(); //pegando o local
    //QMessageBox::about(this,"teste", local); // imprimindo para ver se deu certo
    QDir dir(local);
    // QMessageBox::about(this,"teste", local+nome); //imprimindo novamente para ver
    if(!dir.exists())
      {
      QMessageBox::about(this, "pasta", "Diretório não existe");
      }
    else
      {
      dir.rmdir(local);
      ui->listWidget->clear();
      ui->listWidget->addItem(ui->comboBox->currentText());
      QDir conteudo(ui->comboBox->currentText());
      foreach(QFileInfo qfi,conteudo.entryInfoList())
        {
          if(qfi.isDir())
            {
            ui->listWidget->addItem(qfi.absoluteFilePath());
            }
        }

      }
}

