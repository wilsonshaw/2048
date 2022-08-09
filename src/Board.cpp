#include "Board.hpp"
Blank::Blank(): id(-1), value(0), up(this), down(this), left(this), right(this){}
Blank::Blank(int blank_id, int val): id(blank_id), value(val), up(this), down(this), left(this), right(this){}