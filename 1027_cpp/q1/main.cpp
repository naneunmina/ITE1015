#include <iostream>
#include <algorithm>
#include <string>

#include "sorted.h"

using namespace std;

void SortedArray::AddNumber(int num){
    numbers_.push_back(num);
}
vector<int> SortedArray::GetSortedAscending(){
    sort(numbers_.begin(),numbers_.end());
    return numbers_;
}
vector<int> SortedArray::GetSortedDescending(){
    sort(numbers_.rbegin(),numbers_.rend());
    return numbers_;
}
int SortedArray::GetMax(){
    sort(numbers_.rbegin(),numbers_.rend());
    return numbers_[0];
}
int SortedArray::GetMin(){
    sort(numbers_.begin(),numbers_.end());
    return numbers_[0];
}

int main(void)
{   
    SortedArray s;
    string a;
    cin >> a;
    while(a!="quit"){
        if (a=="ascend"){
            vector<int> as=s.GetSortedAscending();
            for (int i=0; i<as.size(); i++){
                cout << as[i] << " ";
            }
            cout << "\n";
        }
        else if (a=="descend"){
            vector<int> des=s.GetSortedDescending();
            for (int i=0; i<des.size(); i++){
                cout << des[i] << " ";
            }
            cout << "\n";
        }
        else if (a=="max") cout <<s.GetMax() << "\n";
        else if (a=="min") cout << s.GetMin() << "\n";
        else s.AddNumber(stoi(a));
        cin >> a;
    }

    return 0;
}