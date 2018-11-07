#include "twidget.h"

TWidget::TWidget(QWidget *parent)
{
    mBox = new QHBoxLayout(this);
    vBox = new QVBoxLayout();
    hBox = new QVBoxLayout();
    knapp1 = new QPushButton();
    knapp2 = new QPushButton();
    //bilde = new QPixmap();

    knapp1->setText("Trykk for Anime");
    knapp2->setText("Trykk for turn up");

    connect(knapp1,SIGNAL(clicked()),this,SLOT(knappeValg()));
    connect(knapp2,SIGNAL(clicked()),this,SLOT(knappeValg()));

    vBox->addWidget(knapp1);
    vBox->addWidget(knapp2);
    mBox->addLayout(vBox);
    mBox->addLayout(hBox);
}
void TWidget::knappeValg(int i){

}
