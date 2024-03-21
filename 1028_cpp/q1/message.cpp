#include <iostream>
#include <algorithm>
#include "message.h"

using namespace std;

void MessageBook::AddMessage(int number, const std::string& message){
    messages_.insert(make_pair(number,message));
}
void MessageBook::DeleteMessage(int number){
    messages_.erase(number);
}
std::vector<int> MessageBook::GetNumbers(){
    vector<int> getnum;
    for (map<int,string>::iterator it = messages_.begin(); it!=messages_.end(); ++it){
        getnum.push_back(it->first);
    }
    return getnum;
}
const std::string& MessageBook::GetMessage(int number){
    return messages_[number];
}