#pragma once

class Shape{
    protected:
    char can[10][10];

    public:
    double GetArea();
    int GetPerimeter();
    void Draw(int canvas_width, int canvas_height);
};

class Square : public Shape{
    private:
    int x, y, len;
    char b;

    public:
    Square(int _x,int _y,int _len,char _b);
    double GetArea();
    int GetPerimeter();
};

class Rectangle : public Shape{
    private:
    int x,y,width,height;
    char b;

    public:
    Rectangle(int _x, int _y, int _width, int _height, char _b);
    double GetArea();
    int GetPerimeter();
};

class Diamond : public Shape{
    private:
    int x,y;
    double dis;
    char b;

    public:
    Diamond(int _x, int _y, double _dis, char _b);
    double GetArea();
    int GetPerimeter();
};