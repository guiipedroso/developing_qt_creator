#include "lista.h"
#include "ui_lista.h"

Lista::Lista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lista)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color:black;");

    QSqlQuery query;
    QString sql = "SELECT * FROM dados";
    query.prepare(sql);

    if(query.exec(sql))
      {
      int i = 0;

        ui->tableWidget->setColumnCount(2);

      while( query.next()) //enquanto tiver um proximo
        {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem( query.value( 0 ).toString()) );
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem( query.value( 1 ).toString()) );
        ui->tableWidget->setRowHeight(i, 30);
        i++;
        }

      }
    else
      {
      qDebug() << "Erro ao selecionar os dados";
      }

}

Lista::~Lista()
{
    delete ui;
}
