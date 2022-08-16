#include <iostream>
#include <windows.h>
#include "Test.hpp"

int main(){
    HMODULE hDll = LoadLibrary("Test.dll");
    SetDll* dll = new SetDll();
    dll->CAPI = (pCAPI)GetProcAddress(hDll, "CreateAPI");
    TestInterface* tIF = dll->CAPI();
    tIF->Hello();
    FreeLibrary(hDll);
}