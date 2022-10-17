#ifndef FORM_CONTATOS_H
#define FORM_CONTATOS_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class form_contatos;
}

class form_contatos : public QDialog
{
    Q_OBJECT

public:
    explicit form_contatos(QWidget *parent = nullptr);
    ~form_contatos();

private slots:
    void on_btn_novocontato_clicked();

    void on_btn_gravar_clicked();

private:
    Ui::form_contatos *ui;
};

#endif // FORM_CONTATOS_H
