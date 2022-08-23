#include "Frame.h"
#include <QWidget>
#include <QApplication>
#include <QPushButton>

Frame::Frame(int argc, char** argv){
    QApplication app = QApplication(argc, argv);
    GameInit();
    app.exec();
}

void Frame::GameInit(){
    QWidget win = QWidget();
    QPushButton closeBtn = QPushButton(); 
    closeBtn.setText("Close");
    closeBtn.setParent(&win);
    win.show();
};