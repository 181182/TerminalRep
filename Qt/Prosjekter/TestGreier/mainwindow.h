#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QLineEdit *edit;
    QLineEdit *edit1;
    QLineEdit *edit2;


    QHBoxLayout *list;


public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void skifteText();
};

#endif // MAINWINDOW_H
