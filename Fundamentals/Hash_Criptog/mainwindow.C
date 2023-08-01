#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background:white;color:black;");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    str = QString("%1").arg( QString(QCryptographicHash::hash(str.toUtf8(),QCryptographicHash::Md5).toHex()));
    ui->label->setText("Hash Completa: <b>" + str + "</b>");
    QString str2 = str.toUpper().left( 6 );
    ui->label_2->setText("Hash minificada: <b>"+str2+"</b>");
}

