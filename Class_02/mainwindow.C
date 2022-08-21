#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));

    connect(ui->pushButton_2, SIGNAL(pressed()), this, SLOT(showFullScreen()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    QString css = "background-color: #f00;color:#000";
    ui->pushButton_3->setStyleSheet(css);
    /* or it
      ui->pushButton_3->setStyleSheet("")
     */
    showNormal();
}

