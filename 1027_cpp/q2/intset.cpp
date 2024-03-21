#include <iostream>
#include <algorithm>
#include "intset.h"

using namespace std;

void IntegerSet::AddNumber(int num){
    for (int i=0; i<numbers_.size(); i++){
        if (numbers_[i]==num) {
            for (int i=0; i<numbers_.size(); i++) cout << numbers_[i] << " ";
            cout << "\n";
            return;
        }
    }
    numbers_.push_back(num);
    sort(numbers_.begin(),numbers_.end());
    for (int i=0; i<numbers_.size(); i++){
        cout << numbers_[i] << " ";
    }
    cout << "\n";
}
void IntegerSet::DeleteNumber(int num){
    for (int i=0; i<numbers_.size(); i++){
        if (numbers_[i]==num){
            numbers_.erase(numbers_.begin()+i);
        }
    }
    for (int i=0; i<numbers_.size(); i++){
        cout << numbers_[i] << " ";
    }
    cout << "\n";
}
int IntegerSet::GetItem(int pos){
    if (pos>=numbers_.size()) return -1;
    else return numbers_[pos];
}