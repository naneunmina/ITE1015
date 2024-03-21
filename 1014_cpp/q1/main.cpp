#include <iostream>
#include <string>

#include "number.h"

using namespace std;

int main(void)
{
    string a;
    cin >> a;
    while(a!="quit"){
        if (a=="number"){
            int num;
            cin >> num;
            Number n;
            n.setNumber(num);
            cout << "getNumber(): " << n.getNumber() << "\n";
        }
        else if (a=="square"){
            int num;
            cin >> num;
            Square n;
            n.setNumber(num);
            cout << "getNumber(): " << n.getNumber() << "\n";
            cout << "getSquare(): " << n.getSquare() << "\n";
        }
        else if (a=="cube"){
            int num;
            cin >> num;
            Cube n;
            n.setNumber(num);
            cout << "getNumber(): " << n.getNumber() << "\n";
            cout << "getSquare(): " << n.getSquare() << "\n";
            cout << "getCube(): " << n.getCube() << "\n";
        }
        cin >> a;
    }
    return 0;
}