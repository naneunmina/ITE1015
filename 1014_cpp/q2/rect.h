#pragma once

class Rectangle{
    protected:
    int _width;
    int _height;

    public:
    Rectangle(int width, int height);
    int getArea();
    int getPerimeter();
};

class Square : public Rectangle{
    public:
    Square(int width);
    void print();
};

class NonSquare : public Rectangle{
    public:
    NonSquare(int width, int height);
    void print();
};