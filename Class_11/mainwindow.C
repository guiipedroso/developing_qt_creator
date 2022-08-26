#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap> //insira essa biblioteca

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // colocando a imagem no label via codigo
    QPixmap logo(":/images/images/1943.jpg");
    ui->label_2->setPixmap(logo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

