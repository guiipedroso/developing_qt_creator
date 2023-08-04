#ifndef MYTASKS_H
#define MYTASKS_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QTimer>
#include "editar.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MyTasks; }
QT_END_NAMESPACE

class MyTasks : public QMainWindow
{
    Q_OBJECT

public:
    MyTasks(QWidget *parent = nullptr);
    QString home = getenv("HOME");
    void start();
    QString dir = ":/todo.db";
    QString user = home + "/.config/todo.db";

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    void show_data();

    ~MyTasks();

private slots:
    void on_actionSair_triggered();

    void on_actionAbout_triggered();

    void on_btn_adicionar_clicked();

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::MyTasks *ui;
};
#endif // MYTASKS_H
