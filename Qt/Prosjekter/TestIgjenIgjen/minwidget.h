#ifndef MINWIDGET_H
#define MINWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

class minWidget : public QWidget
{
    Q_OBJECT

    QVBoxLayout *mVboxLeft, *mVboxRight;
    QGridLayout *mGridButtons;
    QHBoxLayout *mHboxOuter;
    QPushButton *knapp;
    QLabel *label;


public:
    explicit minWidget(QWidget *parent = 0);

private slots:
    void gjorNoe();
    void sendSignal(int i);

public slots:
    void oppdater();

signals:
    void opneDialog(int);

};

#endif // MINWIDGET_H
