#include "my_string.h"

using namespace std;

int main(void)
{
    string s;
    MyString a, b, ans;
    while(cin>>s&&s!="quit"){
        if (s=="new"){
            cout << "enter a\n";
            cin >> a;
            cout << "enter b\n";
            cin >> b;
        }
        else if (s=="a"){
            cin>>s;
            if (s=="="){
                cin>>s;
                a=b;
            }
            else if (s=="+"){
                cin>>s;
                ans=a+b;
                cout<<ans;
            }
            else if (s=="*"){
                int i;
                cin >> i;
                ans=a.operator*(i);
                cout<<ans;
            }
        }
        else{
            cin>>s;
            if (s=="="){
                cin>>s;
                b=a;
            }
            else if (s=="+"){
                cin>>s;
                ans=b+a;
                cout<<ans;
            }
            else if (s=="*"){
                int i;
                cin >> i;
                ans=b.operator*(i);
                cout<<ans;
            }
        }
    }
    return 0;
}