#include "Board.hpp"
//BoradInterface
int BoardInterFace::getId(){
    return this->id;
}

int BoardInterFace::getVal(){
    return this->value;
}
//Board
void Board::add(BoardInterFace* item){
    if(item->getId() == -1){
        
    }
}