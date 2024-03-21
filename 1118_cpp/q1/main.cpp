#include "my_vector.h"
#include <string>

using namespace std;

bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}

int main(void)
{
    string s;
    MyVector* a;
    MyVector* b;
    MyVector* ans;
    while(cin>>s&&s!="quit"){
        if (s=="new"){
            int length, num; cin>>length;
            a=new MyVector(length);
            b=new MyVector(length);
            ans=new MyVector(length);
            cout << "enter a\n";
            cin >> *a;
            cout << "enter b\n";
            cin >> *b;
        }
        else if (s=="a"){
            cin>>s;
            if (s=="="){
                cin>>s;
                if (s=="b") a=b;
            }
            else if (s=="+"){
                cin>>s;
                if (isNumber(s)) *ans=a->operator+(stoi(s));
                else if (s=="b") *ans=a->operator+(*b);
                else if (s=="a") *ans=a->operator+(*a);
                cout<<*ans;
                cout << "\n";
            }
            else if (s=="-"){
                cin>>s;
                if (isNumber(s)) *ans=a->operator-(stoi(s));
                else if (s=="b") *ans=a->operator-(*b);
                else if (s=="a") *ans=a->operator-(*a);
                cout<<*ans;
                cout << "\n";
            }
        }
        else{
            cin>>s;
            if (s=="="){
                cin>>s;
                if (s=="a") b=a;
            }
            else if (s=="+"){
                cin>>s;
                if (isNumber(s)) *ans=b->operator+(stoi(s));
                else if (s=="a") *ans=b->operator+(*a);
                else if (s=="b") *ans=b->operator+(*b);
                cout<<*ans;
                cout << "\n";
            }
            else if (s=="-"){
                cin>>s;
                if (isNumber(s)) *ans=b->operator-(stoi(s));
                else if (s=="a") *ans=b->operator-(*a);
                else if (s=="b") *ans=b->operator-(*b);
                cout<<*ans;
                cout << "\n";
            }
        }
    }
    delete a;
    delete b;
    delete ans;
    return 0;
}