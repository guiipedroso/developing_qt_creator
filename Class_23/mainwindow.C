#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>

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
    QString link="https://ifms.edu.br";
    QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_pushButton_2_clicked()
{
    QString link="/bin/bloco.txt";
    QDesktopServices::openUrl(QUrl(link));
}

