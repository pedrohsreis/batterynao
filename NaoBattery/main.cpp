#include "mainwindow.h"
#include <QApplication>
#include <QProcess>
#include <QShowEvent>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* w = new MainWindow();
    w->show();


//    QString programa = "/home/pedro/Desktop/naoqi-sdk-2.1.4.13-linux64/naobattery/build-mytoolchain/sdk/bin/naobattery nao03.local";
//    QProcess* process = new QProcess();
//    process->start(programa, QStringList() << "");

    return a.exec();
}
