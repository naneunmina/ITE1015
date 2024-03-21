#include "shape.h"

using namespace std;

Shape::Shape(double width, double height){
    this->width=width;
    this->height=height;
}
Shape::~Shape(){

}

Triangle::Triangle(double width, double height):Shape(width,height){}

double Triangle::getArea() const{
    return 0.5*width*height;
}

Rectangle::Rectangle(double width, double height):Shape(width,height){}

double Rectangle::getArea() const{
    return width*height;
}