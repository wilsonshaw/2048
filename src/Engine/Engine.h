
#include <algorithm>
#ifdef Engine_EXPORTS
    #define Engine_API __declspec(dllexport)
#else
    #define Engine_API __declspec(dllimport)
#endif

#include <minwindef.h>
#include <string>
#include <map>

using namespace std;

class Engine_API GameObject{
public:
    virtual int objectMain() = 0;
};

class Engine_API Init: public GameObject{
private:
};

class Engine_API Engine{
public:
    static void Hello();
    static void GameInit();
    
};
