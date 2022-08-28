#include "Frame.h"

Frame::Frame(Frame* parents, Qt::WindowFlags f): QWidget(parents, f){
//Init Windows
    resize(480, 720);
//Init Layout
    initLayout();
//Init Buttons
    initButton();
}

Frame::~Frame(){
    delete closeButton;
}

void Frame::initLayout(){
    buttonsLayout = new QVBoxLayout();
    
    this->setLayout(buttonsLayout);
}

void Frame::initButton(){
//Button close init
    closeButton = new QPushButton(QString("离开"));
    connect(closeButton, &QPushButton::pressed , this, &Frame::close);
    buttonsLayout->addWidget(closeButton);
}
