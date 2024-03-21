#pragma once

class Number{
    protected:
    int _num;
    public:
    void setNumber(int num);
    int getNumber();
};

class Square : public Number{
    public:
    int getSquare();
};

class Cube : public Square{
    public:
    int getCube();
};