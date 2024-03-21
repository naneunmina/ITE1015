#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string name;
    double score;
}Person;

int main(int argc, char **argv){
    int n=(argc-1)/2;
    Person* pa = new Person[n];

    for (int i=1; i<argc; i++){
        if (i%2==1) pa[(i-1)/2].name=argv[i];
        else pa[(i-1)/2].score=stof(argv[i]);
    }
    for (int i=0; i<n; i++){
        cout << "Name: " << pa[i].name << ", Score: " << pa[i].score << "\n";
    }
    
    delete[] pa;
    return 0;
}