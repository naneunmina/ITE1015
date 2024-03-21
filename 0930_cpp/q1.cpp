#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

int main(){
	int n;
    cin >> n;
    Person* ps= new Person[n];
    for (int i=0; i<n; i++){
        cin >> (ps+i)->name >> (ps+1)->age;
    }
    for (int i=0; i<n; i++){
        cout << "Name: " << (ps+i)->name << ", Age: " << (ps+1)->age << "\n";
    }
	return 0;
}
