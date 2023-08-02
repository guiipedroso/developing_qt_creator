#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color: black;");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString programa = "touch";
    QStringList argumentos;
    argumentos << "/home/pedroso/Documentos/Projects/developing_qt_creator/Fundamentals/Linux/arquivo1.txt" << "/home/pedroso/Documentos/Projects/developing_qt_creator/Fundamentals/Linux/arquivo2.txt";
    QProcess * rodar = new QProcess(this);
    rodar->start( programa, argumentos );
}

//abrir gerenciador de arquivos
void MainWindow::on_pushButton_2_clicked()
{
    QString programa = "xdg-open";
    QStringList argumentos;
    argumentos << "/home/pedroso";
    QProcess * rodar = new QProcess(this);
    rodar->start( programa, argumentos );

    //tem como usar o proprio system

    //system(" touch /home/pedroso gui.txt");
}


void MainWindow::on_pushButton_3_clicked()
{
    QString programa = "firefox";
    QStringList argumentos;
    argumentos << "https://github.com/guiipedroso";
    QProcess * rodar = new QProcess(this);
    rodar->start( programa, argumentos );
}

