#include "mainwindow.h"

#include <string.h>
#include <QApplication>
#include <QLabel>
#include <QDesktopWidget>


QString player_nickname = NULL;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDesktopWidget dw;
    MainWindow w;

    w.setFixedSize(800,600);
    w.show();

    return a.exec();
}
