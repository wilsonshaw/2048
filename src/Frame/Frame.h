#ifdef Frame_EXPORTS
    #define Frame_API __declspec(dllexport)
#else
    #define Frame_API __declspec(dllimport)
#endif

#include <QWidget>

class Frame_API Frame: public QWidget{
public:
    static void GameInit();
    Frame(int agrc, char** argv);
};