#include "Engine.h"

EngineInterface* GetEngineAPI(){
    return new Engine();
}

void DelEngineAPI(EngineInterface *item){
    delete item;
}

bool Engine::isIfRunning = false;

void Engine::gameMain(GameObject *gameInit, GameObject *hundleEvents, GameObject *update, GameObject *render){
    isIfRunning = GameInit(gameInit);
    while (isIfRunning) {
        this->hundleEvents(hundleEvents);
        this->update(update);
        this->render(update);
    } 
}

bool Engine::getisIfRunning(){
    return isIfRunning;
}

bool Engine::GameInit(GameObject* object){
   return object->objectMain(); 
}

void Engine::hundleEvents(GameObject* object){
    isIfRunning = object->objectMain();
}

void Engine::update(GameObject* object){
    isIfRunning = object->objectMain();
}

void Engine::render(GameObject* object){
    isIfRunning = object->objectMain();
}