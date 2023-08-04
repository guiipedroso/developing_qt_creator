#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color:black;");
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = getenv("HOME");
    path += "/Documentos/Projects/developing_qt_creator/Fundamentals/Database/pedroso.db";
    db.setDatabaseName(path);

    if(!db.open())
      {
      qDebug() << "Falha ao encontrar banco de dados";
      }
    else
      {
      qDebug() << "O tipo e comando foi definido e encontrado com sucesso" + path;
      }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->ln_nome->text() == "" || ui->ln_sobrenome->text() == "")
      {
      ui->statusbar->showMessage("Preencha todos os campos");
      return;
      }

    QSqlQuery query;
    QString sql = "INSERT INTO dados (nome, sobrenome) VALUES ('" + ui->ln_nome->text()+ "', '" + ui->ln_sobrenome->text()+ "')";
    query.prepare( sql );

    if( query.exec())
      {
      //QMessageBox::information
      QMessageBox::information(this, "Sucesso!", "Dados inseridos");
      ui->ln_nome->clear();
      ui->ln_sobrenome->clear();
      ui->ln_nome->setFocus();
      ui->statusbar->showMessage("Sucesso ao enviar!");
      }
    else
      {
      QMessageBox::critical(this, "Erro", "Falha ao inserir dados");
      }
}

void MainWindow::on_pushButton_2_clicked()
{
      Lista lista;
      lista.exec();
}

