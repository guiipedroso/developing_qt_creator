#include "mainwindow.h"

#include <QApplication>
#include <qsplashscreen.h>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen * splash_screen = new QSplashScreen;
    splash_screen->setPixmap(QPixmap(":/images/logo_ifms.png"));
    splash_screen->show();

    MainWindow w;

    QTimer::singleShot(3000, splash_screen, SLOT(close()));
    QTimer::singleShot(3000, &w, SLOT (show()));

    //w.show();
    return a.exec();
}
