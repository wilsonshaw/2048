#ifdef Frame_EXPORTS
    #define Frame_API __declspec(dllexport)
#else
    #define Frame_API __declspec(dllimport)
#endif

#include <QWidget>
#include <QPushButton>

class Frame_API Frame: public QWidget{
    QPushButton* closeBtn;
public:
    Frame(Frame* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags(), int w = 480, int h = 720);
};