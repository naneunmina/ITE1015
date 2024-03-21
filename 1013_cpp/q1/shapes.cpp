#include "shapes.h"

using namespace std;

double Circle::area(int radius){
    return 3.14*radius*radius;
}
double Circle::per(int radius){
    return 2*3.14*radius;
}

double Rectangle::area(int l, int t, int r, int b){
    return (r-l)*(t-b);
}

double Rectangle::per(int l, int t, int r, int b){
    return 2*(r-l+t-b);
}