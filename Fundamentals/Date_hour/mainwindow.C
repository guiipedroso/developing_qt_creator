#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDateTime UTC (QDateTime::currentDateTimeUtc());
    QDateTime local( UTC.toLocalTime());
    ui->textBrowser->setText(local.toString());

    // Brazil -> dd/mm/aaaa hh:mm:ss

    int hora = local.time().hour();
    int minuto = local.time().minute();
    int segundo = local.time().second();
    int dia = local.date().day();
    int mes = local.date().month();
    int ano = local.date().year();

    QString horario = QString::number(hora) + ":" + QString::number(minuto) + ":" + QString::number(segundo);
    QString data_atual = QString::number(dia) + "/" + QString::number(mes) + "/" + QString::number(ano);

    ui->textBrowser->setText("Somente hora: <h2>" + QString::number(hora) + "<\h2>"
                             "Somente minuto: <h2>" + QString::number(minuto) + "<\h2>"
                             "Somente segundo: <h2>" + QString::number(segundo) + "<\h2>"
                             "Somente dia: <h2>" + QString::number(dia) + "<\h2>"
                             "Somente mes: <h2>" + QString::number(mes) + "<\h2>"
                             "Somente ano: <h2>" + QString::number(ano) + "<\h2>"
                             "Horario: <b>" + horario + "</b><br>"
                             "Data atual: "  + data_atual);
}

MainWindow::~MainWindow()
{
    delete ui;
}

