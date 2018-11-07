#include "hangmanwidget.h"

HangmanWidget::HangmanWidget(QWidget *parent) : QWidget(parent)
{

    this->setWindowTitle("JEG VET DA FAEN KA EG GJER");
    outerBox = new QHBoxLayout(this);
    venstreLayout = new QVBoxLayout();
    hoyreLayout = new QVBoxLayout();
    frame = new QWidget();
    layout = new QGridLayout();

    alfabet = "abcdefghijklmnopqrstuvwxyz";

    for(QChar c : alfabet){
        knapp = new QPushButton();
        knapp->setText(c);
        connect(knapp, &QPushButton::clicked,this,[=]{TrykketKnapp(c);});
        knapper.push_back(knapp);
    }
    for(unsigned int i = 0; i < knapper.size(); i++){

        layout->addWidget(knapper[i],(i/4),(i%4));
    }

    frame->setStyleSheet("background-image: url(/Users/deadmaggi/Downloads/Images/hangman0.png)");

    venstreLayout->addLayout(layout);
    hoyreLayout->addWidget(frame);

    outerBox->addLayout(venstreLayout);
    outerBox->addLayout(hoyreLayout);

}
void HangmanWidget::TrykketKnapp(QChar c){

}
