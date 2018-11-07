#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    tWidget = new TestWidget(this);
}

MainWindow::~MainWindow()
{

}
