#include <iostream>
#include "minmax.h"

using namespace std;

int main(int argc, char **argv){
    int* arr = new int[argc];
    for (int i=1; i<argc; i++){
        arr[i-1]=stoi(argv[i]);
    }
    int minnum=2147483647,maxnum=-2147483648;
    getMinMax(arr, argc-1, minnum, maxnum);
    cout << "min: " << minnum << "\nmax: " << maxnum << "\n";
    delete[] arr;
    return 0;
}