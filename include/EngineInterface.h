#ifdef ENGINE_INTERFACE_EXPORTS
    #define ENGINE_INTERFACE_EXPORTS __declspec(dllimport)
#else
    #define ENGINE_INTERFACE_EXPORTS __declspec(dllexport)
#endif

class GameObject{
public:
    virtual bool objectMain() = 0;
};

class EngineInterface{
public:
    virtual void gameMain(GameObject* gameInit, GameObject* hundleEvents, 
    GameObject* update, GameObject* render) = 0;
    virtual bool getIsIfRunning() = 0;
    virtual ~EngineInterface(){}
};

extern "C"{
    ENGINE_INTERFACE_EXPORTS EngineInterface* GetEngineAPI();
    ENGINE_INTERFACE_EXPORTS void DelEngineAPI(EngineInterface* item);
}