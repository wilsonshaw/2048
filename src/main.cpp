#include "EngineInterface.h"
#include <windows.h>
#include <iostream>

typedef EngineInterface* (*pGEAPI)();

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
   EngineInterface* pEIF = GEAPI();
   Test* testThing = new Test();
   pEIF->gameMain(testThing, testThing, testThing, testThing);
   return 0;
}