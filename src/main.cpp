#include "EngineInterface.h"
#include <windows.h>
#include <iostream>

typedef EngineInterface* (*pGEAPI)();
typedef void (*pDEAPI)(EngineInterface* item);

class Test: public GameObject{
public:
    static int num;
    virtual bool objectMain(){
        num++;
        if (num > 10) {
            return false;
        }
        std::cout << num << std::endl; 
        return true;
    }
};
int Test::num = 0;

int main(){
   HMODULE hDll = LoadLibrary("Engine.dll"); 
   pGEAPI GEAPI = (pGEAPI)GetProcAddress(hDll, "GetEngineAPI");
   pDEAPI DEAPI = (pDEAPI)GetProcAddress(hDll, "DelEngineAPI");
   EngineInterface* pEIF = GEAPI();
   Test* testThing = new Test();
   pEIF->gameMain(testThing, testThing, testThing, testThing);
   DEAPI(pEIF);
   return 0;
}