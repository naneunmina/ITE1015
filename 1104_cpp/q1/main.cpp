#include "animal.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<Animal*> v;
    char c;
    while(cin>>c&&c!='0'){
        if (c=='z'){
            string name_;
            int age_, stripes_;
            cin >> name_ >> age_ >> stripes_;
            Animal* z= new Zebra(name_, age_, stripes_);
            v.push_back(z);
        }
        else if (c=='c'){
            string name_, favorite_;
            int age_;
            cin >> name_ >> age_ >> favorite_;
            Animal* c= new Cat(name_, age_, favorite_);
            v.push_back(c);
        }
    }
    for (int i=0; i<v.size(); i++){
        v[i]->printInfo();
    }
    for (int i=0; i<v.size(); i++){
        delete v[i];
    }
    return 0;
}