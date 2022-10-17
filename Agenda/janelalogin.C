#include "janelalogin.h"
#include "ui_janelalogin.h"

static QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    bancoDeDados.setDatabaseName("/home/pedroso/Documents/Projects/developing_qt/Agenda/database_agenda");

    if(!bancoDeDados.open())
      {
      ui->label->setText("Não foi possível abrir o banco de dados");
      }
    else
      {
      ui->label->setText("Banco de dados aberto com SUCESSO");
      }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}


void JanelaLogin::on_btn_login_clicked()
{
    QString username = ui->txt_username->text();
    QString senha = ui->txt_senha->text();
    qDebug() << username;
    qDebug() << "senha";

    if(!bancoDeDados.isOpen())
      {
      qDebug() << "Banco de dados não está aberto";
      return;
      }

    QSqlQuery query;
    if(query.exec("select * from tb_colaboradores where username='"+username+"' and senha ='"+senha+"'"))
      {
      int cont = 0;
      while(query.next())
        {
        cont++;
        }
        if(cont>0)
          {
          this->close();
          form_principal fm_principal;
          fm_principal.setModal(true);
          fm_principal.exec();
          }
        else
          {
          ui->label->setText("Login não efetuado");
          ui->txt_username->clear();
          ui->txt_senha->clear();
          ui->txt_username->setFocus();
          }
      }

}

