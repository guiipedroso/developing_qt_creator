#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form_new.h"
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


void MainWindow::on_actionSalvar_triggered()
{
    form_new Form_novo;
    Form_novo.exec();
}


void MainWindow::on_actionSalvar_2_triggered()
{
    QMessageBox::information(this, "Save", "Salved");
}


void MainWindow::on_actionSair_triggered()
{
    close();
    //QApplication::quit();
}

