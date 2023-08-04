#include "mytasks.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTasks w;
    w.show();
    return a.exec();
}
