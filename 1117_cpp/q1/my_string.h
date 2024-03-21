#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

using namespace std;

class MyString
{
    public:
    MyString& operator=(const MyString& b);
    MyString operator+(const MyString& b);
    MyString operator*(const int b);
    friend ostream& operator<<(ostream& out, MyString& my_string);
    friend istream& operator>>(istream& in, MyString& my_string);

    private:
    string str;
};
#endif 