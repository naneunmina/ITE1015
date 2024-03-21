#include "my_string.h"

MyString& MyString::operator=(const MyString& b){
    this->str=b.str;
    return *this;
}
MyString MyString::operator+(const MyString& b){
    MyString ans;
    ans.str=this->str+b.str;
    return ans;
}
MyString MyString::operator*(const int b){
    MyString ans;
    ans.str="";
    for (int i=0; i<b; i++) ans.str+=this->str;
    return ans;
}

ostream& operator<<(ostream& out, MyString& my_string){
    out << my_string.str << "\n";
    return out;
}
istream& operator>>(istream& in, MyString& my_string){
    in >> my_string.str;
    return in;
}