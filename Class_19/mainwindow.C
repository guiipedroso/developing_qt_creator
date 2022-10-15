#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form_tab.h" //incluindo nosso formulario

int i;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    i = ui->tabWidget->count();
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
  ui->tabWidget->removeTab(index);
  i--;
}


void MainWindow::on_pushButton_clicked()
{
    i++;
    ui->tabWidget->addTab(new QWidget(), "Nova Tab "+ QString::number(i));
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->removeTab(ui->tabWidget->currentIndex()); //removendo tab atual
}


void MainWindow::on_pushButton_3_clicked()
{
    i++;
    ui->tabWidget->addTab(new Form_tab(), "Nova Tab "+ QString::number(i));
}

