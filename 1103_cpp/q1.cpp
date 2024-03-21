#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A{
    public:
    virtual string test(){
        return "A::test()\n";
    }
};

class B : public A{
    public:
    virtual string test(){
        return "B::test()\n";
    }
};

class C : public B{
    public:
    virtual string test(){
        return "C::test()\n";
    }
};

int main(){
    vector<A*> arr;
    A* a = new A;
    A* b = new B;
    A* c = new C;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for (int i=0; i<3; i++){
        cout << arr[i]->test();
    }
    delete a;
    delete b;
    delete c;
    return 0;
}