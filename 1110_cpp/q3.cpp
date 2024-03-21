#include <iostream>
#include <vector>

using namespace std;

class B{
    public:
    virtual ~B() {}
};

class C : public B{
    public:
    void test_C() { std::cout << "C::test_C()" << std::endl; }
};

class D : public B{
    public:
    void test_D() { std::cout << "D::test_D()" << std::endl; }
};

int main(){
    vector<B*> arr;
    char a;
    while (cin>>a&&a!='0'){
        if (a=='B'){
            B* pb = new B;
            arr.push_back(pb);
        }
        else if (a=='C'){
            B* pb = new C;
            arr.push_back(pb);
        }
        else if (a=='D'){
            B* pb = new D;
            arr.push_back(pb);
        }
    }
    for (int i=0; i<arr.size(); i++){
        C* bc = dynamic_cast<C*>(arr[i]);
        D* bd = dynamic_cast<D*>(arr[i]);
        if (bc) bc->test_C();
        else if (bd) bd->test_D();
    }
    for (int i=0; i<arr.size(); i++){
        delete arr[i];
    }
    return 0;
}