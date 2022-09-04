#ifdef Frame_EXPORTS
    #define Frame_API __declspec(dllexport)
#else
    #define Frame_API __declspec(dllimport)
#endif

#include <QWidget>

class Frame_API Frame:public QWidget
{
    Q_OBJECT
private:  

public:
    Frame(Frame* parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~Frame();
signals:

public slots:

};