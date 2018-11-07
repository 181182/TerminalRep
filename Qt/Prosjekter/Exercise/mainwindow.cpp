#include "mainwindow.h"
#include <QPushButton>
#include <QSignalMapper>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    srand(time(NULL));
    int v1 = rand() & (5 + 1);

    this->setWindowTitle("JEG VET DA FAEN KA EG GJER");

    QWidget *placeHolderWidget = new QWidget();

    mBox = new QHBoxLayout();
    placeHolderWidget->setLayout(mBox);
    this->setCentralWidget(placeHolderWidget);
    k1Box = new QVBoxLayout();
    k2Box = new QVBoxLayout();
    rBox = new QVBoxLayout();

    m = new QSignalMapper();


    knapp1 = new QPushButton("1");
    knapp2 = new QPushButton("2");
    k1Box->addWidget(knapp1);
    k1Box->addWidget(knapp2);
    k1Box->addStretch();
    knapp3 = new QPushButton("3");
    knapp4 = new QPushButton("4");
    knapp5 = new QPushButton("5");
    k2Box->addWidget(knapp3);
    k2Box->addWidget(knapp4);
    k2Box->addWidget(knapp5);
    k2Box->addStretch();

    masterknapp = new QPushButton("Master");
 //   rBox->addStretch(20);
    rBox->addWidget(masterknapp);
    rBox->addStretch();



//    knapp1->setGeometry(0,0,50,40);
//    knapp2->setGeometry(50,0,50,40);
//    knapp3->setGeometry(100,0,50,40);
//    knapp4->setGeometry(150,0,50,40);
//    knapp5->setGeometry(200,0,50,40);
//    masterknapp->setGeometry(300,0,100,40);


    connect(knapp1,SIGNAL(clicked()),m, SLOT(map()));
    connect(knapp2,SIGNAL(clicked()),m, SLOT(map()));
    connect(knapp3,SIGNAL(clicked()),m, SLOT(map()));
    connect(knapp4,SIGNAL(clicked()),m, SLOT(map()));
    connect(knapp5,SIGNAL(clicked()),m, SLOT(map()));

    m->setMapping(knapp1,1);
    m->setMapping(knapp2,2);
    m->setMapping(knapp3,3);
    m->setMapping(knapp4,4);
    m->setMapping(knapp5,5);


    connect(m,SIGNAL(mapped(int)),this,SLOT(keyPressed(int)));
    connect(masterknapp,SIGNAL(clicked(bool)),this,SLOT(testPress()));

    mBox->addLayout(k1Box);
    mBox->addLayout(k2Box);
    mBox->addLayout(rBox);
}

MainWindow::~MainWindow()
{

}
void MainWindow::keyPressed(int nummer){
    if(nummer == 3){
        knapp3->setStyleSheet("* { background-color: green }");
    }
    else if(nummer < 3){
        knapp1->setStyleSheet("* { background-color: red }");
        knapp2->setStyleSheet("* { background-color: red }");

    }
    else if(nummer > 3){
        knapp4->setStyleSheet("* { background-color: red }");
        knapp5->setStyleSheet("* { background-color: red }");

    }
}
void MainWindow::testPress(){
    knapp1->setStyleSheet("* { background-color: white }");
    knapp2->setStyleSheet("* { background-color: white }");
    knapp3->setStyleSheet("* { background-color: white }");
    knapp4->setStyleSheet("* { background-color: white }");
    knapp5->setStyleSheet("* { background-color: white }");

}

