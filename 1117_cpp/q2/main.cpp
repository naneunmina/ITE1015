#include "my_string2.h"

using namespace std;

int main(void)
{
    string s;
    MyString2 *a = new MyString2();
    MyString2 *b = new MyString2();
    MyString2 *ans = new MyString2();
    while(cin>>s&&s!="quit"){
        if (s=="new"){
            delete a;
            delete b;
            a = new MyString2;
            b = new MyString2;
            cout << "enter a\n";
            cin >> *a;
            cout << "enter b\n";
            cin >> *b;
        }
        else if (s=="a"){
            cin>>s;
            if (s=="="){
                cin>>s;
                delete a;
                a = new MyString2(*b);
            }
            else if (s=="+"){
                cin>>s;
                delete ans;
                ans = new MyString2(*a+*b);
                cout<<*ans;
            }
            else if (s=="*"){
                int i;
                cin >> i;
                delete ans;
                ans = new MyString2(*a*i);
                cout<<*ans;
            }
        }
        else{
            cin>>s;
            if (s=="="){
                cin>>s;
                delete b;
                b = new MyString2(*b);
            }
            else if (s=="+"){
                cin>>s;
                delete ans;
                ans = new MyString2(*b+*a);
                cout<<*ans;
            }
            else if (s=="*"){
                int i;
                cin >> i;
                delete ans;
                ans = new MyString2(*a*i);
                cout<<*ans;
            }
        }
    }
    delete a;
    delete b;
    delete ans;
    return 0;
}