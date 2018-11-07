#ifndef DIALOGVINDU_H
#define DIALOGVINDU_H

#include <QObject>
#include <QMessageBox>


class DialogVindu : public QObject
{
    QMessageBox box;
public:
    explicit DialogVindu(QObject *parent = nullptr);

public slots:
    void opneVindu(int i);

signals:
    void oppdater();
};

#endif // DIALOGVINDU_H
