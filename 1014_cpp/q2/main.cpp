#include <iostream>
#include <string>

#include "rect.h"

using namespace std;

int main(void)
{
    string a;
    cin >> a;
    while(a!="quit"){
        if (a=="square"){
            int num;
            cin >> num;
            Square n(num);
            n.print();
        }
        else if (a=="nonsquare"){
            int num1, num2;
            cin >> num1 >> num2;
            NonSquare n(num1,num2);
            n.print();
        }
        cin >> a;
    }
    return 0;
}