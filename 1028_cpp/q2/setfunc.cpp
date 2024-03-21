#include <iostream>
#include "setfunc.h"

using namespace std;

void SetFunc::parseSet(const string& str){
    set_0.insert(stoi(str));
}
void SetFunc::printSet(const set<int>& set_){
    set<int>::iterator iter;
    cout << "{ ";
    for(iter = set_.begin(); iter != set_.end(); iter++){
        cout << *iter << " " ;
    }
    cout << "}\n";
}
set<int> SetFunc::getIntersection(const std::set<int>& set_){
    set<int>::iterator iter;
    for (iter=set_.begin(); iter!=set_.end(); iter++){
        if (set_0.find(*iter)!=set_0.end()) set_1.insert(*iter);
    }
    return set_1;
}
set<int> SetFunc::getUnion(const std::set<int>& set_){
    set<int>::iterator iter;
    for (iter=set_.begin(); iter!=set_.end(); iter++){
        set_1.insert(*iter);
    }
    for (iter=set_0.begin(); iter!=set_0.end(); iter++){
        set_1.insert(*iter);
    }
    return set_1;
}
set<int> SetFunc::getDifference(const std::set<int>& set_){
    set<int>::iterator iter;
    for (iter=set_0.begin(); iter!=set_0.end(); iter++){
        if (set_.find(*iter)==set_.end()) set_1.insert(*iter);
    }
    return set_1;
}