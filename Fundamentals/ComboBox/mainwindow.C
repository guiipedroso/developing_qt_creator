#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color: black;");
    QString so[] = {"Linux", "Windows", "MacOS", "FreeBSD"};
    QString icons[] = {":sys_oper/linux.png", ":sys_oper/windows.png", ":sys_oper/macos.png",":sys_oper/freebsd.png"};
    //ui->comboBox->addItem( "RedoxOS"); //adicionando item

    for (unsigned long int i = 0; i < sizeof(so)/sizeof(so[0]); ++i)
      {
        ui->comboBox->addItem(QIcon(icons [i]), so[i]);

      }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->label->setText( "Voce escolheu: <b>" + ui->comboBox->currentText()+ "</b>");
}

