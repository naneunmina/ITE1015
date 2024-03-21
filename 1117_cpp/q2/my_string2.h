#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

using namespace std;

class MyString2
{
    public:
    MyString2();
    MyString2(const MyString2& ms);
    MyString2& operator=(const MyString2& b) { return *this; };
    MyString2 operator+(const MyString2& b);
    MyString2 operator*(const int b);
    friend ostream& operator<<(ostream& out, MyString2& my_string);
    friend istream& operator>>(istream& in, MyString2& my_string);

    private:
    string str;
};
#endif 