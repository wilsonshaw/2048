#include "Test.hpp"
int Test::add(int a, int b){
    return a + b;
}

TestInterface* CreateAPI(){
    return new Test();
}

void DestroyAPI(TestInterface* item){
    delete item;
}