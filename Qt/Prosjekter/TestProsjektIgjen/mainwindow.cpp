#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    twidget = new TWidget(this);
}

MainWindow::~MainWindow()
{

}
