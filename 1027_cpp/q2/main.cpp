#include <iostream>
#include <algorithm>
#include <string>

#include "intset.h"

using namespace std;

int main(void)
{   
    IntegerSet integer_set;
    string a;
    int num;
    cin >> a;
    while (a!="quit"){
        if (a=="add"){
            cin >> num;
            integer_set.AddNumber(num);
        }
        else if (a=="del"){
            cin >> num;
            integer_set.DeleteNumber(num);
        }
        else if (a=="get"){
            cin >> num;
            cout << integer_set.GetItem(num) << "\n";
        }
        cin >> a;
    }
    return 0;
}