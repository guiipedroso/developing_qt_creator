#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString cursos[5] = {"C++", "PHP", "QT Creator", "Java", "Python"};
    QString icons[5] = {":/icons/langs/icons8-c-plus-plus-64.png",
                        ":/icons/langs/icons8-php-48.png",
                        ":/icons/langs/icons8-qt-50.png",
                        ":/icons/langs/icons8-java-50.png",
                       ":/icons/langs/icons8-python-48.png"};
    for(int i = 0; i < 5; ++i)
      {
      ui->comboBox->addItem(QIcon(icons[i]),cursos[i]);
      }

    // ui->comboBox->insertItem(3,"HTML"); //inserindo item
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  QMessageBox::about(this,"Languages", ui->comboBox->currentText());
}

