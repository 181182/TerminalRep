#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QPushButton *mButton1;

public:
    MainWindow(QWidget *parent = 0);
    //buttonClicked();
    ~MainWindow();

public slots:
    void buttonClicked(void);
};

#endif // MAINWINDOW_H
