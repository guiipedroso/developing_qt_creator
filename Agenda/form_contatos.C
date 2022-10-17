#include "form_contatos.h"
#include "ui_form_contatos.h"
#include <QMessageBox>

form_contatos::form_contatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_contatos)
{
    ui->setupUi(this);
}

form_contatos::~form_contatos()
{
    delete ui;
}

void form_contatos::on_btn_gravar_clicked()
{
    QString nome = ui->txt_nome->text();
    QString telefone = ui->txt_telefone->text();
    QString email = ui->txt_email->text();

    QSqlQuery query;
    query.prepare("insert into tb_contatos (nome_contato,telefone_contato,email_contato) values"
                  "('"+nome+"','"+telefone+"','"+email+"')");
    if(query.exec())
      {
      QMessageBox::information(this,"","Registro gravado com sucesso");
      ui->txt_nome->clear();
      ui->txt_telefone->clear();
      ui->txt_email->clear();
      ui->txt_nome->setFocus();
      }
    else
      {
      qDebug() << "Erro ao inserir registro";
      }
}

