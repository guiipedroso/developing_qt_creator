#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Hello World"); //inicia com esse nome na barra de status
    ui->statusbar->addPermanentWidget(ui->pushButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_ok_clicked()
{
    ui->statusbar->showMessage("Nome:"+ui->txt_name->text()+" | E-mail: "+ui->txt_email->text());
    ui->txt_name->clear();
    ui->txt_email->clear();
}


void MainWindow::on_pushButton_clicked()
{
    QString msg = "github.com/guiipedroso";
    ui->statusbar->showMessage(msg);
    QMessageBox::about(this, "Sobre", "github.com/guiipedroso");
}

