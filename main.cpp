#include "mainwindow.h"

#include <QApplication>
#include <clocale>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    setlocale(LC_ALL, "rus");
    MainWindow w;
    w.show();
    return a.exec();
}
