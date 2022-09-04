#ifdef Frame_EXPORTS
    #define Frame_API __declspec(dllexport)
#else
    #define Frame_API __declspec(dllimport)
#endif

#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QString>
#include <QPushButton>

class Frame_API Frame: public QWidget
{
    Q_OBJECT
private:
    QPushButton* startButton;
    QPushButton* closeButton;
    QVBoxLayout* buttonsLayout;
    QHBoxLayout* winLayout;
//Private methods
    void initButton();
    void initLayout();    
public:
    Frame(Frame* parents = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~Frame();
signals:

public slots:
};