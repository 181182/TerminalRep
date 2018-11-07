#ifndef HANGMANWIDGET_H
#define HANGMANWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <vector>

class HangmanWidget : public QWidget
{
    Q_OBJECT
public:
    explicit HangmanWidget(QWidget *parent = nullptr);
    QGridLayout *layout;
    QHBoxLayout *outerBox;
    QVBoxLayout *venstreLayout;
    QVBoxLayout *hoyreLayout;

    std::vector<QPushButton*> knapper;
    QPushButton *knapp;
    QWidget *frame;

   private:
    QString alfabet;

signals:

public slots:
    void TrykketKnapp(QChar c);
};

#endif // HANGMANWIDGET_H
