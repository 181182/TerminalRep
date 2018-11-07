#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

class TestWidget : public QWidget
{
    Q_OBJECT

    QHBoxLayout *mBox;
    QVBoxLayout *vBox;
    QVBoxLayout *hBox;
    QPushButton *knapp1;
    QPushButton *knapp2;

public:
    explicit TestWidget(QWidget *parent = nullptr);

signals:
    void knappeValg(int i);
private slots:
    void trykkKnapp(int i);
};

#endif // TESTWIDGET_H
