#include "mytasks.h"
#include "ui_mytasks.h"

MyTasks::MyTasks(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyTasks)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color:black;");
    start();

    db.setDatabaseName( user );

    !db.open() ? qDebug() << "Falha ao encontrar o arquivo do banco: " : qDebug() << "Arquivo do arquivo do banco encontrado: " + user;

    show_data();
}

MyTasks::~MyTasks()
{
    delete ui;
}

void MyTasks::start()
{
    QFile quser( user );

    if( ! quser.exists())
      {
      QFile::copy( dir, user);
      system("chmod 600 ~/.config/todo.db");
      qDebug() << "O arquivo inicial foi copiado";
      }

}

void MyTasks::show_data()
  {
  QSqlQuery query;
  QString sql = "SELECT * FROM to_dos ORDER BY id ASC"; // or DESC

  query.prepare(sql);

  if(!query.exec())
    {
    QMessageBox::warning(this, "Error","Não foi possível realizar consulta.");
    }
  else
    {
    qDebug() << "Consulta realizada com sucesso";

    ui->tableWidget->setColumnCount(3);

    int i = 0;

    while( query.next())
      {
      ui->tableWidget->insertRow(i);
      //campos
      ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query.value(0).toString()));
      ui->tableWidget->setItem(i, 1, new QTableWidgetItem(query.value(1).toString()));
      ui->tableWidget->setItem(i, 2, new QTableWidgetItem(query.value(2).toString()));
      ++i;
      }
    QStringList hearders = {"ID","Tarefa","Data/Hora"};
    ui->tableWidget->setHorizontalHeaderLabels(hearders);

    ui->tableWidget->setColumnWidth(0, 65);
    ui->tableWidget->setColumnWidth(1, 430);
    ui->tableWidget->setColumnWidth(2, 150);

    while( i < ui->tableWidget->rowCount() )
      {
      ui->tableWidget->removeRow(i);
      }


    ui->tableWidget->verticalHeader()->setVisible( false );
    }
  }

void MyTasks::on_actionSair_triggered()
{
    close();
}

void MyTasks::on_actionAbout_triggered()
{
    QMessageBox::about(this, "Sobre esse projeto", "<h2>MyTasks 1.0.0</h2>"
                                                   "<p>Desenvolvido por Guilherme Pedroso"
                                                   "Copyright @guihh_pedroso"
                                                   "<p><a href='https://github.com/guiipedroso'>github.com</a></p>");
}


void MyTasks::on_btn_adicionar_clicked()
{
    if( ui->lineEdit->text() == "")
      {
      QMessageBox::warning(this, "Aviso", "Preencha o campo da tarefa. ");
      return;
      }
    if( !db.isOpen() )
      {
      QMessageBox::critical(this, "Aviso", "Falha ao conectar ao banco de dados ");
      }


      QSqlQuery query;
      QString sql = "INSERT INTO to_dos (todos) VALUES ('"+ ui->lineEdit->text()+"')";
      query.prepare(sql);

      if(query.exec(sql))
        {
        ui->statusbar->showMessage("Dados inseridos com sucesso!");
        QTimer::singleShot( 2000, [&](){ui->statusbar->showMessage("");});
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
        ui->tableWidget->clear();
        show_data();
        }
      else
        {
        qDebug() << "Falha ao inserir dados";
        }
}


void MyTasks::on_tableWidget_cellClicked(int row, int column)
{
    column = 0;
    int id = ui->tableWidget->item(row, column)->text().toInt();

    QString todo = ui->tableWidget->item(row, column+1)->text();
    Editar e(this, id, todo);
    e.exec();
    show_data();
}

