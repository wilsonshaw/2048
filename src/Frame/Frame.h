#ifdef Frame_EXPORTS
    #define Frame_API __declspec(dllexport)
#else
    #define Frame_API __declspec(dllimport)
#endif

#include <QWidget>
#include <QLayout>
#include <QPushButton>

class Frame_API Frame: public QWidget{
    QPushButton* closeButton;
    QVBoxLayout* buttonsLayout;

    void initButton();
    void initLayout();    
public:
    Frame(Frame* parents = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~Frame();
};