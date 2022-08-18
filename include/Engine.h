#include "EngineInterface.h"

class Engine: public EngineInterface{
public:
    virtual void gameMain(GameObject* gameInit, GameObject* hundleEvents, 
    GameObject* update, GameObject* render);
    virtual bool getIsIfRunning();
    virtual bool getIsIfRunning(bool set);
    virtual bool setIsIfHundleEvents(bool set);
    virtual bool setIsIfUpdate(bool set);
    virtual bool setIsIfRender(bool set);
private:
    static bool isIfRunning;
    static bool isIfHundleEvents;
    static bool isIfUpdate;
    static bool isIfRender;
    static bool GameInit(GameObject* object);
    void hundleEvents(GameObject* object);
    void update(GameObject* object);
    void render(GameObject* object);
};