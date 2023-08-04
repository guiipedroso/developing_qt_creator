#include "lista.h"
#include "ui_lista.h"

Lista::Lista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lista)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color:black;");
}

Lista::~Lista()
{
    delete ui;
}
