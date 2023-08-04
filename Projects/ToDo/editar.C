#include "editar.h"
#include "ui_editar.h"

Editar::Editar(QWidget *parent, int id, QString todo) :
    QDialog(parent),
    ui(new Ui::Editar)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color:black;");
    ui->label->setText( QString::number( id ) );
    ui->lineEdit->setText(todo);
}

Editar::~Editar()
{
    delete ui;
}

void Editar::on_btn_editar_clicked()
{
    if(ui->lineEdit->text() == "")
      {
      QMessageBox::warning(this, "Aviso", "Campo não pode ficar vazio.");
      return;
      }

    QString id = ui->label->text();

    QSqlQuery query;
    QString sql = "UPDATE to_dos SET todos= '" + ui->lineEdit->text() + "' WHERE id=" + id;
    qDebug() << sql;
    query.prepare(sql);

    if(query.exec())
      {
      close();
      }
    else
      {
      qDebug() << "Falha ao atualizar dados";
      }

}


void Editar::on_btn_excluir_clicked()
{
    QString id = ui->label->text();

    QSqlQuery query;
    QString sql = "DELETE FROM to_dos WHERE id=" + id;
    qDebug() << sql;
    query.prepare(sql);

    if(query.exec())
      {
      close();
      }
    else
      {
      qDebug() << "Falha ao atualizar dados";
      }
}

