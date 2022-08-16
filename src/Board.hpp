#ifndef BOARD_EXPORTS
#define BOARD_API __declspec(dllexport)
#endif


#ifndef BOARD_HPP_INCLUDE
#define BOARD_HPP_INCLUDE

class BoardInterFace{
private:
    int id;
    int value;
public:
    BoardInterFace* up;
    BoardInterFace* down;
    BoardInterFace* left;
    BoardInterFace* right;
    virtual void add(BoardInterFace* item) = 0;
    virtual void remove(int id) = 0;
    int getId();
    int getVal();
};

class Board: public BoardInterFace{
public:
    Board();
    virtual void add(BoardInterFace* item);
    virtual void remove(int id);
};

class NumBlank: public BoardInterFace{
public:
    NumBlank(int, int);
    virtual void add(BoardInterFace* item);
    virtual void remove(int id);
};

class Column: public BoardInterFace{
public:
    Column();
    virtual void add(BoardInterFace* item);
    virtual void remove(int id);
};

class Row: public BoardInterFace{
public:
    Row();
    virtual void add(BoardInterFace* item);
    virtual void remove(int id);
};

#endif

extern "C"{
    BOARD_API BoardInterFace*  CreateAPI();
    void BOARD_API DestoryAPI();
}