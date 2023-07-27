#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color: black;");
    QListWidgetItem * so1 = new QListWidgetItem("Linux");
    QListWidgetItem * so2 = new QListWidgetItem("Windows");
    QListWidgetItem * so3 = new QListWidgetItem("MacOS");
    QListWidgetItem * so4 = new QListWidgetItem("FreeBSD");
    ui->listWidget->addItem( so1 );
    ui->listWidget->addItem( so2 );
    ui->listWidget->addItem( so3 );
    ui->listWidget->addItem( so4 );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_adicionar_clicked()
{
    if(ui->lineEdit->text() != "")
      {
      ui->statusbar->showMessage("");
      ui->listWidget->addItem(ui->lineEdit->text());
      ui->lineEdit->clear();
      }
    else
      {
      ui->statusbar->showMessage("Informe um nome para adicionar.");
      }
}


void MainWindow::on_btn_deletar_clicked()
{
      ui->listWidget->currentItem()->setForeground(Qt::red);
      ui->listWidget->currentItem()->setBackground(Qt::red);

    foreach(QListWidgetItem * NAME, ui->listWidget->selectedItems())
      {
      delete ui->listWidget->takeItem(ui->listWidget->row(NAME));
      }
}
