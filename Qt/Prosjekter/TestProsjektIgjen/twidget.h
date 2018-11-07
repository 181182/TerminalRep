#ifndef TWIDGET_H
#define TWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>


class TWidget : QWidget
{
    Q_OBJECT

    QHBoxLayout *mBox;
    QVBoxLayout *vBox;
    QVBoxLayout *hBox;
    QPushButton *knapp1;
    QPushButton *knapp2;

public:
    explicit TWidget(QWidget *parent = nullptr);
signals:
    void knappeValg(int i);
private slots:
    void trykkKnapp(int i);

};

#endif // TWIDGET_H
