#include "Test.hpp"
#include <iostream>

void Test::Hello(){
    std::cout << "Hello, Wilson!" << std::endl;
}

TestInterface* CreateAPI(){
    return new Test();
}