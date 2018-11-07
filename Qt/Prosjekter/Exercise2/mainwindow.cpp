#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    hangman = new HangmanWidget(this);
}

MainWindow::~MainWindow()
{

}
