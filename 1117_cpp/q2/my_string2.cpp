#include "my_string2.h"

MyString2::MyString2(){}

MyString2::MyString2(const MyString2& ms){
    str = ms.str;
}

MyString2 MyString2::operator+(const MyString2& b){
    MyString2 ans;
    ans.str=this->str+b.str;
    return ans;
}
MyString2 MyString2::operator*(const int b){
    MyString2 ans;
    ans.str="";
    for (int i=0; i<b; i++) ans.str+=this->str;
    return ans;
}

ostream& operator<<(ostream& out, MyString2& my_string){
    out << my_string.str << "\n";
    return out;
}
istream& operator>>(istream& in, MyString2& my_string){
    in >> my_string.str;
    return in;
}