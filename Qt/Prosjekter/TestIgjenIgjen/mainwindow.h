#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "minwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:

    minWidget *minwidget;
};

#endif // MAINWINDOW_H
