#include "Frame.h"
#include <iostream>

using namespace std;

Frame::Frame(Frame* parents, Qt::WindowFlags f): QWidget(parents, f)
{
//Init Windows
    resize(480, 720);
//Init Layout
    initLayout();
//Init Buttons
    initButton();
}

Frame::~Frame()
{
//buttonsLayout
    buttonsLayout->removeWidget(closeButton); 
//winLayout
    winLayout->removeItem(buttonsLayout);
//delete
    delete closeButton;
    delete buttonsLayout;
}


void Frame::initLayout()
{
//the buttons' layout
    buttonsLayout = new QVBoxLayout();
///the main window's layout
    winLayout = new QHBoxLayout();
    winLayout->setAlignment(Qt::AlignHCenter);
    winLayout->addSpacing(2);
    winLayout->addLayout(buttonsLayout, 1);

    this->setLayout(winLayout);
}

void Frame::initButton()
{
//Button start init
    startButton = new QPushButton(QString("开始")); 
    connect(startButton, &QPushButton::pressed, this, &Frame::close);
    buttonsLayout->addWidget(startButton, 1);
//Button close init
    closeButton = new QPushButton(QString("离开"));
    connect(closeButton, &QPushButton::pressed , this, &Frame::close);
    buttonsLayout->addWidget(closeButton, 1);
}