#include "mainwindow.h"
#include "dialogvindu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    minwidget = new minWidget(this);
    DialogVindu *dialog = new DialogVindu(this);
    setCentralWidget(minwidget);

    connect(minwidget, &minWidget::opneDialog,dialog,&DialogVindu::opneVindu);
 //   connect(dialog, &DialogVindu::oppdater, minwidget, &minWidget::oppdater);
}

MainWindow::~MainWindow()
{

}
