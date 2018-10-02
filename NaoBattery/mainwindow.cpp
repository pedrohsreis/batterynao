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

        QString output;


        args << "nao01.local";
        p.start(programa, args);
        p.waitForFinished();
        output = p.readAllStandardOutput();

        std::string saida = output.toStdString();
        size_t position = saida.find("\nM");
        std::string saidaFinal = saida.substr(position);
        output = QString::fromStdString(saidaFinal);


        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO02"){

        QString output;


        args << "nao02.local";
        p.start(programa, args);
        p.waitForFinished();
        output = p.readAllStandardOutput();

        std::string saida = output.toStdString();
        size_t position = saida.find("\nM");
        std::string saidaFinal = saida.substr(position);
        output = QString::fromStdString(saidaFinal);


        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO03"){

        QString output;


        args << "nao03.local";
        p.start(programa, args);
        p.waitForFinished();
        output = p.readAllStandardOutput();

        std::string saida = output.toStdString();
        size_t position = saida.find("\nM");
        std::string saidaFinal = saida.substr(position);
        output = QString::fromStdString(saidaFinal);


        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO04"){

        QString output;


        args << "nao04.local";
        p.start(programa, args);
        p.waitForFinished();
        output = p.readAllStandardOutput();

        std::string saida = output.toStdString();
        size_t position = saida.find("\nM");
        std::string saidaFinal = saida.substr(position);
        output = QString::fromStdString(saidaFinal);


        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO05"){

        QString output;


        args << "nao05.local";
        p.start(programa, args);
        p.waitForFinished();
        output = p.readAllStandardOutput();

        std::string saida = output.toStdString();
        size_t position = saida.find("\nM");
        std::string saidaFinal = saida.substr(position);
        output = QString::fromStdString(saidaFinal);


        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
    if(ui->selectNaoBox->currentText() == "NAO06"){

        QString output;


        args << "nao06.local";
        p.start(programa, args);
        p.waitForFinished();
        output = p.readAllStandardOutput();

        std::string saida = output.toStdString();
        size_t position = saida.find("\nM");
        std::string saidaFinal = saida.substr(position);
        output = QString::fromStdString(saidaFinal);


        //Popout:
        QMessageBox texto;
        texto.setText(output);
        texto.exec();
    }
}
