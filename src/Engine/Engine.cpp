#include "Engine.h"
#include <iostream>

using namespace std;

void Engine::Hello(){
   cout << "Wilson Shaw Present" << endl;
}

void Engine::GameInit(){

};

int Test::runTime = 0;

void Test::printRunTime(){
   cout << runTime << endl; 
   runTime++;
}