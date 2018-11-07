#include "mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *window = new QWidget(this);

    list = new QHBoxLayout();
    edit = new QLineEdit();

    edit1 = new QLineEdit();

    edit2 = new QLineEdit();


//    QPushButton *button = new QPushButton("Heisann");
    connect(edit, SIGNAL(editingFinished()), this, SLOT(skifteText()));
   list->addWidget(edit);
//    list->addWidget(but
   list->addWidget(edit1);
   list->addWidget(edit2);

//    setCentralWidget(list);
   window->setLayout(list);
   setCentralWidget(window);

}

MainWindow::~MainWindow()
{

}

void MainWindow::skifteText(){
   edit->setText("HAHA EG VIND");
   edit2->setText(edit1->text());
}
