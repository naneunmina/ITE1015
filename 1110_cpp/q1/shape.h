#pragma once
#include <string>
#include <vector>

using namespace std;

class Shape{
    public:
    Shape(double width, double height);
    ~Shape();
    virtual double getArea() const=0;

    protected:
    double width, height;
};

class Triangle:public Shape{
    public:
    Triangle(double width, double height);
    virtual double getArea() const;
};

class Rectangle:public Shape{
    public:
    Rectangle(double width, double height);
    virtual double getArea() const;
};