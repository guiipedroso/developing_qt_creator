#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background: white; color: black;");
    //QWebEngineView * view = new QWebEngineView;
    //view->load(QUrl("www.google.com"));
    //ui->textBrowser->close();
   // ui->gridLayout->addWidget(view);

    ui->textBrowser->setHtml("<h1>Minha pagina inicial</h1>");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_search_clicked()
{
    QString caminho;
    QWebEngineView * view = new QWebEngineView;

    caminho = ui->ln_search->text();

    view->load(QUrl(caminho));
    ui->textBrowser->close();

    QWidget * widget = ui->gridLayout->itemAt(0)->widget(); // 0 pq nao inciamos uma pagina antes, caso tiver como no construtor, devemos colocar 1.
    delete widget;

    ui->gridLayout->addWidget(view);
}

