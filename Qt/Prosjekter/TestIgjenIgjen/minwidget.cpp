#include "minwidget.h"
#include <QTabWidget>
#include <QRadioButton>
#include <QButtonGroup>

minWidget::minWidget(QWidget *parent)
    : QWidget(parent)
{
    QTabWidget* tabWidget = new QTabWidget();
    mHboxOuter = new QHBoxLayout(this);
    mVboxLeft = new QVBoxLayout();
    mVboxRight = new QVBoxLayout();
    mGridButtons = new QGridLayout();
    label = new QLabel();
    mHboxOuter->addWidget(label);
    for(int i = 0; i < 10; i++){
        knapp = new QPushButton();
        knapp->setText("Knapp nr ");
        connect(knapp, SIGNAL(clicked(bool)), this, SLOT(gjorNoe()));
        mGridButtons->addWidget(knapp,i/5,i%5);
    }

    QButtonGroup* knappegruppe1 = new QButtonGroup();
    QRadioButton* rad1 = new QRadioButton("1");
    QRadioButton* rad2 = new QRadioButton("2");
    knappegruppe1->addButton(rad1,1);
    knappegruppe1->addButton(rad2,2);

    QButtonGroup* knappegruppe2 = new QButtonGroup();
    QRadioButton* rad3 = new QRadioButton("3");
    QRadioButton* rad4 = new QRadioButton("4");
    knappegruppe2->addButton(rad3,3);
    knappegruppe2->addButton(rad4,4);

    mVboxRight->addWidget(rad1);
    mVboxRight->addWidget(rad2);
    mVboxRight->addWidget(rad3);
    mVboxRight->addWidget(rad4);

    connect(knappegruppe1, SIGNAL(buttonClicked(int)),this,SLOT(sendSignal(int)));



    mHboxOuter->addLayout(mVboxLeft);
    mHboxOuter->addSpacing(100);
    mHboxOuter->addLayout(mVboxRight);
    mVboxLeft->addSpacing(30);
    mVboxLeft->addSpacing(30);



    mVboxLeft->addLayout(mGridButtons);

}
void minWidget::gjorNoe(){
    this->setVisible(false);

}
void minWidget::sendSignal(int i){
    emit opneDialog(i);
    label->setText("HEISANN MOFO");

}
void minWidget::oppdater(){
label->setText("HEISANN MOFO");
}


