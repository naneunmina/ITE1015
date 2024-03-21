#include <iostream>
#include <cmath>

#include "canvas.h"

using namespace std;

Canvas::Canvas(int row, int col){
    this->row=row;
    this->col=col;
    can= new char*[row];
    for (int i=0; i<row; i++){
        can[i]=new char[col];
    }
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            can[i][j]='.';
        }
    }
}

Canvas::~Canvas(){
    for (int i=0; i<col; i++){
        delete[] can[i];
    }
    delete[] can;
}

void Canvas::DrawPixel(int x, int y, char brush){
    if (x>=0&&x<col&&y>=0&&y<row) can[y][x]=brush;
}

void Canvas::Print(){
    cout << " ";
    for (int i=0; i<col; i++) cout << i;
    cout << "\n";
    for (int i=0; i<row; i++){
        cout << i;
        for (int j=0; j<col; j++){
            cout << can[i][j];
        }
        cout << "\n";
    }
}

Shape::Shape(int x, int y, char brush){
    this->x=x;
    this->y=y;
    this->brush=brush;
}

Shape::~Shape(){

}

void Shape::Draw(Canvas* canvas){

}

void Shape::Info(){

}

Rectangle::Rectangle(int x, int y, int width, int height, char brush):Shape(x,y,brush){
    this->width=width;
    this->height=height;
}

void Rectangle::Draw(Canvas* canvas) {
    for (int i=x; i<x+width; i++){
        for (int j=y; j<y+height; j++){
            canvas->DrawPixel(i,j,brush);
        }
    }
}

void Rectangle::Info(){
    cout << "rect " << x << " " << y << " " << width << " " << height << " " << brush << "\n";
}

UpTriangle::UpTriangle(int x, int y, int height, char brush):Shape(x,y,brush){
    this->height=height;
}

void UpTriangle::Draw(Canvas* canvas) {
    for (int i=0; i<height; i++){
        for (int j=x-i; j<=x+i; j++){
            canvas->DrawPixel(j,i+y,brush);
        }
    }
}

void UpTriangle::Info(){
    cout << "tri_up " << x << " " << y << " " << height << " " << brush << "\n";
}

DownTriangle::DownTriangle(int x, int y, int height, char brush):Shape(x,y,brush){
    this->height=height;
}

void DownTriangle::Draw(Canvas* canvas) {
    for (int i=0; i<height; i++){
        for (int j=x-i; j<=x+i; j++){
            canvas->DrawPixel(j,y-i,brush);
        }
    }
}

void DownTriangle::Info(){
    cout << "tri_down " << x << " " << y << " " << height << " " << brush << "\n";
}

Diamond::Diamond(int x, int y, int distance, char brush):Shape(x,y,brush){
    this->distance=distance;
}

void Diamond::Draw(Canvas* canvas) {
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (abs(y+distance-i)+abs(x-j)<=distance) canvas->DrawPixel(j,i,brush);
        }
    }
}

void Diamond::Info(){
    cout << "diamond " << x << " " << y << " " << distance << " " << brush << "\n";
}