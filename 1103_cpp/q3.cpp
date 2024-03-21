#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A{
    private:
    int* numA;
    
    public:
    A(int _i){
        numA = new int;
        *numA=_i;
        cout << "new memberA\n";
    }
    virtual ~A(){
        delete numA;
        cout << "delete memberA\n";
    }
    virtual void print(){
        cout << "*memberA " << *numA << "\n";
    }
};

class B : public A{
    private:
    double* numB;

    public:
    B(double _d) : A(1){
        numB = new double;
        *numB=_d;
        cout << "new memberB\n";
    }
    virtual ~B(){
        delete numB;
        cout << "delete memberB\n";
    }
    virtual void print(){
        A::print();
        cout << "*memberB " << *numB << "\n";
    }
};

class C : public B{
    private:
    string* strC;
    
    public:
    C(const string& _s) : B(1.1){
        strC = new string;
        *strC=_s;
        cout << "new memberC\n";

    }
    virtual ~C(){
        delete strC;
        cout << "delete memberC\n";
    }
    virtual void print(){
        B::print();
        cout << "*memberC " << *strC << "\n";
    }
};

int main(){
    vector<A*> arr;
    int x;
    double y;
    string z;
    cin >> x >> y >> z;
    A* a = new A(x);
    A* b = new B(y);
    A* c = new C(z);
    
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for (int i=0; i<3; i++){
        arr[i]->print();
    }
    delete a;
    delete b;
    delete c;
    return 0;
}