#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logo("/home/pedroso/Downloads/Casa_Baden.jpg");
    ui->label->setPixmap(logo.scaled(580,220,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap imagem("/home/pedroso/Downloads/hello.jpeg");
    ui->label->setPixmap(imagem.scaled(580,220,Qt::KeepAspectRatio));
}

