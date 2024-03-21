#include "my_vector.h"

using namespace std;

MyVector::MyVector(){}
MyVector::MyVector(int length){
    this->length=length;
    a=new double[length];
}
MyVector::~MyVector(){
    delete[] a;
}
MyVector& MyVector::operator=(const MyVector& b){
    for (int i=0; i<this->length; i++) this->a[i]=b.a[i];
    return *this;
}
MyVector MyVector::operator+(const MyVector& b){
    MyVector ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]+b.a[i];
    return ret;
}
MyVector MyVector::operator-(const MyVector& b){
    MyVector ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]-b.a[i];
    return ret;
}
MyVector MyVector::operator+(const int b){
    MyVector ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]+b;
    return ret;
}
MyVector MyVector::operator-(const int b){
    MyVector ret(this->length);
    for (int i=0; i<this->length; i++) ret.a[i]=this->a[i]-b;
    return ret;
}
ostream& operator<< (std::ostream& out, MyVector& b){
    for (int i=0; i<b.length; i++) out << b.a[i] << " ";
    return out;
}
istream& operator>> (std::istream& in, MyVector& b){
    for (int i=0; i<b.length; i++) in >> b.a[i];
    return in;
}