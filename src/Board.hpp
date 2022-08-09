#ifndef BOARD_HPP_EXPORT
#define DLLEXPORT __declspec(dllexport)
#define BOARD_HPP_EXPORT
class Blank
{
public:
    int id;
    int value;
    Blank* up;
    Blank* down;
    Blank* left;
    Blank* right;
    Blank();
    Blank(int, int);
};
#endif