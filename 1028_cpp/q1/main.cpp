#include <iostream>

#include "message.h"

using namespace std;

int main(void)
{   
    MessageBook m;
    string a;
    int phone;
    cin >> a;
    while(a!="quit"){
        if (a=="add"){
            cin >> phone;
            string message;
            getline(cin,message);
            m.AddMessage(phone,message);
        }
        else if (a=="delete"){
            cin >> phone;
            m.DeleteMessage(phone);
        }
        else if (a=="print"){
            cin >> phone;
            cout << m.GetMessage(phone) << "\n";
        }
        else if (a=="list"){
            vector<int> numlist;
            numlist=m.GetNumbers();
            for (int i=0; i<numlist.size(); i++){
                cout << numlist[i] << ": " << m.GetMessage(numlist[i]) << "\n";
            }
        }
        cin >> a;
    }
    return 0;
}