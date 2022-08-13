#include "Test.hpp"
#include <iostream>
#include <windows.h>

typedef TestInterface* (*pCAPI)();
typedef void (*pDAPI)(TestInterface* item);

int main(){
    HINSTANCE hDll = LoadLibrary("Test.dll");
    pCAPI CAPI = (pCAPI)GetProcAddress((HMODULE)hDll, "CreateAPI");
    TestInterface* tIF = CAPI();
    std::cout << tIF->add(3, 3);
    FreeLibrary((HMODULE)hDll);
    return 0;
}