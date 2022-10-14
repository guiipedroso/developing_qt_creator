#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QString msg,cor,transp,lang;

    msg = "";
    if(ui->rb_vermelho->isChecked())
      {
      cor = "Vermelho";
      }
    else if(ui->rb_preto->isChecked())
      {
      cor = "Preto";
      }
    else if(ui->rb_azul->isChecked())
      {
      cor = "Azul";
      }
    else
      {
      cor = "None";
      }

    int ntransp;

    if(ui->rb_jato->isChecked())
      {
      ntransp = 1;
      }
    else if(ui->rb_barco->isChecked())
      {
      ntransp = 2;
      }
    else if(ui->rb_carro->isChecked())
      {
      ntransp = 3;
      }
    else
      {
      cor = "None";
      }

    switch(ntransp)
      {
      case 1:
        transp = " Jato";
        break;
      case 2:
        transp = " Barco";
        break;
      case 3:
        transp = " Carro";
        break;
      default:
        transp = "None";
      }

    QVector<bool>pro;
    pro.push_back(ui->rb_cpp->isChecked());
    pro.push_back(ui->rb_php->isChecked());
    pro.push_back(ui->rb_python->isChecked());

    lang = "None";
    if(pro[0])
      {
      lang = " C++";
      }
    if(pro[1])
      {
      lang = " PHP";
      }
     if(pro[2])
       {
       lang = " Python";
       }

     msg = cor+transp+lang;
     QMessageBox::about(this,"RadioButton", msg);
  }

