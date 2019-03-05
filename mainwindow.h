#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "global.h"
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
    void on_Start_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
