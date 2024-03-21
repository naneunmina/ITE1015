#include <iostream>

#include "accounts.h"

using namespace std;

int main(void)
{
    int cnt=0;
    AccountManager am;
    cout << "Job?\n";
    char s;
    cin >> s;
    while (!(s=='Q'||cnt>9)){
        if (s=='N'){
            am.N(cnt);
            cnt++;
        }
        else if (s=='D'){
            int id, money;
            cin >> id >> money;
            am.D(id,money);
        }
        else if (s=='W'){
            int id, money;
            cin >> id >> money;
            am.W(id,money);
        }
        else if (s=='T'){
            int id1, id2, money;
            cin >> id1 >>  id2 >> money;
            am.T(id1,id2,money);
        }
        cout << "Job?\n";
        cin >> s;
    }
    return 0;
}