#include "Engine/Engine.h"
#include "Frame/Frame.h"

class Engine_API Engine;
class Frame_API Frame;

int main(int argc, char** argv){
    Frame mine = Frame(argc, argv);
    return 0;
}