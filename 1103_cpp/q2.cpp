#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A{
    public:
    virtual string getTypeInfo(){
        return "This is ans instance of class A\n";
    }
};

class B : public A{
    public:
    virtual string getTypeInfo(){
        return "This is ans instance of class B\n";
    }
};

class C : public B{
    public:
    virtual string getTypeInfo(){
        return "This is ans instance of class C\n";
    }
};

void printObjectTypeInfo1(A* object){
    cout << object->getTypeInfo();
}

void printObjectTypeInfo2(A& object){
    cout << object.getTypeInfo();
}

int main(){
    vector<A*> arr;
    A* a = new A;
    A* b = new B;
    A* c = new C;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for (int i=0; i<3; i++){
        printObjectTypeInfo1(arr[i]);
        printObjectTypeInfo2(*arr[i]);
	}
    delete a;
    delete b;
    delete c;
    return 0;
}