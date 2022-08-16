#include "EngineInterface.h"

class Engine: public EngineInterface{
public:
    virtual void gameMain(GameObject* gameInit, GameObject* hundleEvents, 
    GameObject* update, GameObject* render);
    virtual bool getisIfRunning();
private:
    static bool isIfRunning;
    static bool GameInit(GameObject* object);
    void hundleEvents(GameObject* object);
    void update(GameObject* object);
    void render(GameObject* object);
};