#include "my_vector2.h"

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
    MyVector2* a = new MyVector2();
    MyVector2* b = new MyVector2();
    while(cin>>s&&s!="quit"){
        if (s=="new"){
            int length; cin>>length;
            delete a;
            delete b;
            a=new MyVector2(length);
            b=new MyVector2(length);
            cout << "enter a\n";
            cin >> *a;
            cout << "enter b\n";
            cin >> *b;
        }
        else if (s=="a"){
            cin>>s;
            if (s=="="){
                cin>>s;
                if (s=="b") {
                    a=new MyVector2(*b);
                };
            }
            else if (s=="+"){
                cin>>s;
                if (isNumber(s)) {
                    MyVector2 ans(*a+(stoi(s)));
                    cout<<ans;
                }
                else if (s=="b") {
                    MyVector2 ans(*a+(*b));
                    cout<<ans;
                }
                else if (s=="a") {
                    MyVector2 ans(*a+(*a));
                    cout<<ans;
                }
                cout << "\n";
            }
            else if (s=="-"){
                cin>>s;
                if (isNumber(s)) {
                    MyVector2 ans(*a-(stoi(s)));
                    cout<<ans;
                }
                else if (s=="b") {
                    MyVector2 ans(*a-(*b));
                    cout<<ans;
                }
                else if (s=="a") {
                    MyVector2 ans(*a-(*a));
                    cout<<ans;
                }
                cout << "\n";
            }
        }
        else{
            cin>>s;
            if (s=="="){
                cin>>s;
                if (s=="a") {
                    b=new MyVector2(*a);
                }
            }
            else if (s=="+"){
                cin>>s;
                if (isNumber(s)) {
                    MyVector2 ans(*b+(stoi(s)));
                    cout<<ans;
                }
                else if (s=="b") {
                    MyVector2 ans(*b+(*b));
                    cout<<ans;
                }
                else if (s=="a") {
                    MyVector2 ans(*b+(*a));
                    cout<<ans;
                }
                cout << "\n";
            }
            else if (s=="-"){
                cin>>s;
                if (isNumber(s)) {
                    MyVector2 ans(*b-(stoi(s)));
                    cout<<ans;
                }
                else if (s=="b") {
                    MyVector2 ans(*b-(*b));
                    cout<<ans;
                }
                else if (s=="a") {
                    MyVector2 ans(*b-(*a));
                    cout<<ans;
                }
                cout << "\n";
            }
        }
    }
    delete a;
    delete b;
    return 0;
}