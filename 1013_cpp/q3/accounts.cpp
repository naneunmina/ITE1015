#include <iostream>
#include "accounts.h"

using namespace std;

void Account::cid(int _id){
    ID=_id;
}
void Account::cbal(){
    balance=0;
}
int Account::bal(){
    return balance;
}
void Account::plus(int _bal){
    balance+=_bal;
}
void Account::mi(int _bal){
    balance-=_bal;
}

void AccountManager::N(int _id){
    a[_id].cid(_id);
    a[_id].cbal();
    cout << "Account for user " << _id << " registered\n";
    cout << "Balance of user " << _id << ": " << a[_id].bal() << "\n\n";
}
void AccountManager::D(int _id, int _money){
    cout << "Success: Deposit to user " << _id << " " << _money << "\n";
    a[_id].plus(_money);
    cout << "Balance of user " << _id << ": " << a[_id].bal() << "\n\n";
}
void AccountManager::W(int _id, int _money){
    if(a[_id].bal()<_money) cout << "Failure: Withdraw from user " << _id << " " << _money << "\n";
    else a[_id].mi(_money);
    cout << "Balance of user " << _id << ": " << a[_id].bal() << "\n\n";
}
void AccountManager::T(int fid, int sid, int money){
    if(a[fid].bal()<money) cout << "Failure: Transfer from user " << fid << " to user " << sid << " " << money << "\n";
    else{
        a[fid].mi(money);
        a[sid].plus(money);
    }
    cout << "Balance of user " << fid << ": " << a[fid].bal() << "\n";
    cout << "Balance of user " << sid << ": " << a[sid].bal() << "\n\n";
}