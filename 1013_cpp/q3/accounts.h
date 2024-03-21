#pragma once

class Account
{
    private:
    int ID;
    int balance;

    public:
    void cid(int _id);
    void cbal();
    int bal();
    void plus(int _bal);
    void mi(int _bal);
};

class AccountManager
{
    public:
    Account a[10];
    void N(int _id);
    void D(int _id, int _money);
    void W(int _id, int _money);
    void T(int fid, int sid, int money);
};