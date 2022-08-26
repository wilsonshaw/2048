#include "Frame.h"
#include <QWidget>
#include <QApplication>
#include <QPushButton>

Frame::Frame(Frame* parent, Qt::WindowFlags f, int w, int h){
    QWidget win(parent, f);
    this->resize(w, h);
//Butto Close Init
    closeBtn = new QPushButton("Close");
    closeBtn->setParent(this);
    closeBtn->setStyleSheet(QString("color=red;"));
    connect(closeBtn, &QPushButton::pressed, this, &Frame::close);
}