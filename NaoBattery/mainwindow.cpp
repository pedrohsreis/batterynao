#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "string"
#include "QProcess"
#include "QTextBrowser"
#include <QMessageBox>
#include <QIODevice>
#include <QFile>
#include <QTextStream>

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
        p.waitForFinished();
        //Popout:
        QString output = p.readAllStandardOutput();
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO02"){
        args << "nao02.local";
        p.start(programa, args);
        p.waitForFinished();
        QString output = p.readAllStandardOutput();
        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO03"){
        QString filename = "/box.txt";
        QFile file(filename);
        args << "nao03.local";
        p.start(programa, args);
        p.waitForFinished();
        QString output = p.readAllStandardOutput();
        if ( file.open(QIODevice::ReadWrite) )
        {
            QTextStream stream( &file );
            stream << output << endl;
        }
        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO04"){
        QString filename = "/home/pedro/Desktop/box.txt";
        QFile file(filename);
        args << "nao04.local";
        p.start(programa, args);
        p.waitForFinished();
        QString output = p.readAllStandardOutput();
        if ( file.open(QIODevice::ReadWrite) )
        {
            QTextStream stream( &file );
            stream << output << endl;
        }

        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO05"){
        args << "nao05.local";
        p.start(programa, args);
        p.waitForFinished();
        QString output = p.readAllStandardOutput();
        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO06"){
        args << "nao06.local";
        p.start(programa, args);
        p.waitForFinished();
        QString output = p.readAllStandardOutput();
        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
}

/*
 * QProcess process;
process.start("/path/to/test.sh");
process.waitForFinished();
QString output = process.readAllStandardOutput();
qDebug() << output;
QString err = process.readAllStandardError();
qDebug() << err;

*/

