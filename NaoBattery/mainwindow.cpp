#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "QProcess"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);

    QObject* button = QObject::sender();

    QString programa = "/naobattery";
    QStringList args;
    args << "nao03.local";
    // p.start(programa, args);


    if(button = ui->btnStatusBateria){
        if(ui->selectNaoBox->currentText() == "NAO03"){
            p.start(programa, args);
        }
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnStatusBateria_clicked()
{
    QString programa = "/naobattery";
    QStringList args;
    //args << "nao03.local";
    // p.start(programa, args);

    if(ui->selectNaoBox->currentText() == "NAO01"){
        args << "nao01.local";
        p.start(programa, args);
    }
    if(ui->selectNaoBox->currentText() == "NAO02"){
        args << "nao02.local";
        p.start(programa, args);
    }
    if(ui->selectNaoBox->currentText() == "NAO03"){
        args << "nao03.local";
        p.start(programa, args);
    }
    if(ui->selectNaoBox->currentText() == "NAO04"){
        args << "nao04.local";
        p.start(programa, args);
    }
    if(ui->selectNaoBox->currentText() == "NAO05"){
        args << "nao05.local";
        p.start(programa, args);
    }
    if(ui->selectNaoBox->currentText() == "NAO06"){
        args << "nao06.local";
        p.start(programa, args);
    }
}
