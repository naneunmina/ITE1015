#include "my_vector2.h"

using namespace std;

MyVector2::MyVector2(){
    length=0;
    a=0;
}
MyVector2::MyVector2(int length){
    this->length=length;
    a=new double[length];
}
MyVector2::MyVector2(const MyVector2& mv){
    this->length=mv.length;
    a=new double[length];
    for (int i=0; i<length; i++) a[i]=mv.a[i];
}
MyVector2::~MyVector2(){
    delete[] a;
}
MyVector2 MyVector2::operator+(const MyVector2& b){
    MyVector2 ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]+b.a[i];
    return ret;
}
MyVector2 MyVector2::operator-(const MyVector2& b){
    MyVector2 ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]-b.a[i];
    return ret;
}
MyVector2 MyVector2::operator+(const int b){
    MyVector2 ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]+b;
    return ret;
}
MyVector2 MyVector2::operator-(const int b){
    MyVector2 ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]-b;
    return ret;
}
ostream& operator<< (std::ostream& out, MyVector2& b){
    for (int i=0; i<b.length; i++) out << b.a[i] << " ";
    return out;
}
istream& operator>> (std::istream& in, MyVector2& b){
    for (int i=0; i<b.length; i++) in >> b.a[i];
    return in;
}