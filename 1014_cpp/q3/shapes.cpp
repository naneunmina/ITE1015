#include <iostream>
#include <cmath>
#include "shapes.h"

using namespace std;

void Shape::Draw(int canvas_width, int canvas_height){
    cout << " ";
    for (int i=0; i<canvas_width; i++) cout << i;
    cout << "\n";
    for (int i=0; i<canvas_height; i++){
        cout << i;
        for (int j=0; j<canvas_width; j++) cout << can[i][j];
        cout << "\n";
    }
}


Square::Square(int _x,int _y,int _len,char _b){
    x=_x;
    y=_y;
    len=_len;
    b=_b;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (j>=x&&j<x+len&&i>=y&&i<y+len) can[i][j]=b;
            else can[i][j]='.';
        }
    }
}
double Square::GetArea(){
    return len*len;
}
int Square::GetPerimeter(){
    return 4*len;
}


Rectangle::Rectangle(int _x, int _y, int _width, int _height, char _b){
    x=_x;
    y=_y;
    width=_width;
    height=_height;
    b=_b;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (j>=x&&j<x+width&&i>=y&&i<y+height) can[i][j]=b;
            else can[i][j]='.';
        }
    }
}
double Rectangle::GetArea(){
    return width*height;
}
int Rectangle::GetPerimeter(){
    return 2*(width+height);
}


Diamond::Diamond(int _x, int _y, double _dis, char _b){
    x=_x;
    y=_y;
    dis=_dis;
    b=_b;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (abs(y+dis-i)+abs(x-j)<=dis) can[i][j]=b;
            else can[i][j]='.';
        }
    }
}
double Diamond::GetArea(){
    return (dis*2+1)*(dis*2+1)/2;
}
int Diamond::GetPerimeter(){
    return 4*(dis+1);
}