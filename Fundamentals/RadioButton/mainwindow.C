#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btn_resposta_clicked()
{
    QString resposta;

    if(ui->rb_op1->isChecked())
      {
      resposta = ui->rb_op1->text() +". Parabéns pela escolha! ";
      ui->label_anwser->setText(resposta);
      }
    if(ui->rb_op2->isChecked())
      {
      resposta = ui->rb_op2->text() +". Parabéns pela escolha! ";
      ui->label_anwser->setText(resposta);
      }
    if(ui->rb_op3->isChecked())
      {
      resposta = ui->rb_op3->text() +". Parabéns pela escolha! ";
      ui->label_anwser->setText(resposta);
      }
    if(ui->rb_op4->isChecked())
      {
      resposta = ui->rb_op4->text() +". Parabéns pela escolha! ";
      ui->label_anwser->setText(resposta);
      }
    else
      {
      resposta = "Escolha uma alternativa!";
      ui->label_anwser->setText(resposta);
      }
}

