/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralWidget;
    QComboBox *selectNaoBox;
    QPushButton *btnStatusBateria;
    QPushButton *btnAutonomia;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 600);
        MainWindow->setMinimumSize(QSize(600, 600));
        MainWindow->setMaximumSize(QSize(1000, 1000));
        MainWindow->setBaseSize(QSize(600, 600));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        selectNaoBox = new QComboBox(centralWidget);
        selectNaoBox->setObjectName(QStringLiteral("selectNaoBox"));
        selectNaoBox->setGeometry(QRect(170, 20, 171, 25));
        selectNaoBox->setMaximumSize(QSize(171, 25));
        btnStatusBateria = new QPushButton(centralWidget);
        btnStatusBateria->setObjectName(QStringLiteral("btnStatusBateria"));
        btnStatusBateria->setGeometry(QRect(180, 120, 141, 25));
        btnStatusBateria->setMaximumSize(QSize(141, 25));
        btnAutonomia = new QPushButton(centralWidget);
        btnAutonomia->setObjectName(QStringLiteral("btnAutonomia"));
        btnAutonomia->setGeometry(QRect(180, 180, 141, 25));
        btnAutonomia->setMaximumSize(QSize(141, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        selectNaoBox->clear();
        selectNaoBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Selecionar NAO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NAO01", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NAO02", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NAO03", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NAO04", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NAO05", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NAO06", Q_NULLPTR)
        );
        btnStatusBateria->setText(QApplication::translate("MainWindow", "Status da bateria", Q_NULLPTR));
        btnAutonomia->setText(QApplication::translate("MainWindow", "Calcular autonomia", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
