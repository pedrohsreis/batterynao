#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "QProcess"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);


    QString programa = "/build-mytoolchain/sdk/bin/naobattery nao03.local";
    QProcess* process = new QProcess(this);
    if(/*ui->btnStatusBateria->clicked()*/ 1 == 1){
        if(/*ui->selectNaoBox->currentText() == "NAO03"*/ 1 == 1){
            process->start(programa, QStringList() << "");
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
