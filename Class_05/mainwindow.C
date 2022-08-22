#include "mainwindow.h"
#include "ui_mainwindow.h"

//construtor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()),this,SLOT(mudaTexto()));
}

//métodos
void
MainWindow::mudaTexto()
  {
  ui->label->setText("Guilherme Pedroso");
  }

//destrutor
MainWindow::~MainWindow()
{
    delete ui;
}

