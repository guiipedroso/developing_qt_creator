#ifndef LISTA_H
#define LISTA_H

#include <QDialog>
#include <QtSql>
#include <QDebug>

namespace Ui {
class Lista;
}

class Lista : public QDialog
{
    Q_OBJECT

public:
    explicit Lista(QWidget *parent = nullptr);
    ~Lista();

private:
    Ui::Lista *ui;
};

#endif // LISTA_H
