#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    int a=stoi(argv[2]);
    for (int i=0; i<a; i++){
        cout << argv[1] << "\n";
    }
    return 0;
}