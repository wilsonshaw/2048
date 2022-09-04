#include <QApplication>
#include "Engine/Engine.h"
#include "Frame/Frame.h"

class Engine_API Engine;
class Frame_API Frame;

int main(int argc, char** argv){ 
    QApplication app = QApplication(argc, argv);
    Frame mainWin;
    mainWin.show();
    return app.exec();
}