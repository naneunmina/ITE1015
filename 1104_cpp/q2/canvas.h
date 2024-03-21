#pragma once
#include <string>
#include <vector>

using namespace std;

class Canvas {
    public:
    Canvas(int row, int col);
    ~Canvas();
    void DrawPixel(int x, int y, char brush);
    void Print();

    private:
    int row, col;
    char** can;
};

class Shape {
    public:
    Shape(int x, int y, char brush);
    ~Shape();
    virtual void Draw(Canvas* canvas);
    virtual void Info();
    
    protected:
    int x, y;
    char brush;
};

class Rectangle : public Shape {
    public:
    Rectangle(int x, int y, int width, int height, char brush);
    virtual void Draw(Canvas* canvas);
    virtual void Info();

    private:
    int width, height;
};

class UpTriangle : public Shape {
    public:
    UpTriangle(int x, int y, int height, char brush);
    virtual void Draw(Canvas* canvas);
    virtual void Info();

    private:
    int height;
};

class DownTriangle : public Shape {
    public:
    DownTriangle(int x, int y, int height, char brush);
    virtual void Draw(Canvas* canvas);
    virtual void Info();

    private:
    int height;
};
class Diamond : public Shape {
    public:
    Diamond(int x, int y, int distance, char brush);
    virtual void Draw(Canvas* canvas);
    virtual void Info();

    private:
    int distance;
};
