#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "twidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    TWidget *twidget;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
