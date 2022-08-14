#include "Test.hpp"
#include <iostream>
#include <windows.h>
int main(){
    HMODULE hDll = LoadLibrary("Test.dll");
    pCAPI CAPI = (pCAPI)GetProcAddress(hDll, "CreateAPI");
    TestInterface* tIF = CAPI();
    tIF->Hello();
    FreeLibrary(hDll);
}