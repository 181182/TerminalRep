#include "testwidget.h"

TestWidget::TestWidget(QWidget *parent) : QWidget(parent)
{

    mBox = new QHBoxLayout(this);
    vBox = new QVBoxLayout();
    hBox = new QVBoxLayout();
    knapp1 = new QPushButton();
    knapp2 = new QPushButton();
    //bilde = new QPixmap();

    knapp1->setText("Trykk for Anime");
    knapp2->setText("Trykk for turn up");

    connect(knapp1,SIGNAL(clicked()),this,SLOT(knappeValg(1)));
    connect(knapp2,SIGNAL(clicked()),this,SLOT(knappeValg(2)));

    vBox->addWidget(knapp1);
    vBox->addWidget(knapp2);
//    hBox->addItem(bilde);
    mBox->addLayout(vBox);
    mBox->addLayout(hBox);




}
void TestWidget::knappeValg(int i){
    if(i == 0){
//        bilde->load("/Users/deadmaggi/Downloads/CybuEaUVIAAF_HV.jpg");
    }
}
