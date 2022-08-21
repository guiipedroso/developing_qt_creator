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
 /*
  QMessageBox::about(this, "Github", "https://github.com/guiipedroso/developing_qt");

  QMessageBox::aboutQt(this);

  QMessageBox::critical(this,"Github", "not found");

  QMessageBox::information(this,"Github","follow https://github.com/guiipedroso/developing_qt");
*/
   QMessageBox::question(this,"Github","Do you want follow https://github.com/guiipedroso/developing_qt");

}

