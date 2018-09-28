#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QProcess>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_btnStatusBateria_clicked();

private:
    Ui::MainWindow *ui;
    QProcess p;
};

#endif // MAINWINDOW_H
