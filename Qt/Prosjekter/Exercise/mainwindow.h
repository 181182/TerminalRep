#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QSignalMapper>


class MainWindow : public QMainWindow
{
    Q_OBJECT





public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:

    QHBoxLayout* mBox;
    QVBoxLayout* k1Box;
    QVBoxLayout* k2Box;
    QVBoxLayout* rBox;

    QSignalMapper* m;
    QGridLayout* grid;
    QPushButton* knapp1;
    QPushButton* knapp2;
    QPushButton* knapp3;
    QPushButton* knapp4;
    QPushButton* knapp5;


    QPushButton* masterknapp;
public slots:
    void keyPressed(int nummer);
    void testPress();

};

#endif // MAINWINDOW_H
