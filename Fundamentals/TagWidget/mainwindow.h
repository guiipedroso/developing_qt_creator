#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    signed short int tabNum = 0;
    ~MainWindow();

private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_actionNovo_Documento_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
