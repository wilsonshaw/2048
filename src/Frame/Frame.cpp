#include "Frame.h"
#include <QLayout>
#include <QWidget>
#include <QApplication>
#include <QPushButton>

Frame::Frame(Frame* parent, Qt::WindowFlags f, int w, int h){
    QWidget win(parent, f);
    this->resize(w, h);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setStyleSheet(QString("background-color=yellow;"));
//Button Close Init
    closeBtn = new QPushButton("Close");
    closeBtn->setStyleSheet(QString("color=red;"));
    connect(closeBtn, &QPushButton::pressed, this, &Frame::close);
//Layout of buttons
    buttonsLayout = new QVBoxLayout();
    buttonsLayout->addWidget(closeBtn);

    mainWindowsInit();
}

Frame::~Frame(){
    delete closeBtn;
    delete buttonsLayout;
}

void Frame::mainWindowsInit(){
    buttonsLayout->setParent(this); 
}