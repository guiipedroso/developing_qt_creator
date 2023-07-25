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
    QMessageBox::about(this, "Desenvolvedores", "https://github.com/guiipedroso/developing_qt_creator");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::warning(this, "Warning", "No close window");

}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::critical(this, "Critico", "Problem in the window");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::question(this, "Question", "Do you love me?", "Yes", "No");
}

