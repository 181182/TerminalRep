#include "mainwindow.h"
#include <QLabel>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel* label = new QLabel(this);
    label->setText("SnakkesPåKont");
    QLabel* label1 = new QLabel(this);
    label1->setText("FårJobbUansett");
    label1->hide();
    label->setMouseTracking(true);
    QColor* farge = new QColor(20, 40, 10);
    label1->setGeometry(0,0,0,59);
 //   mButton1 = new QPushbutton(this);


 //   connect(mButton1, SIGNAL(clicked(bool)), this, SLOT(buttonClicked()));
}

MainWindow::~MainWindow()
{

}

void MainWindow::buttonClicked(){
    qDebug() << "Button is clicked";
}
