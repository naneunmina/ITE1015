#include <iostream>

#include "setfunc.h"

using namespace std;

int main(void)
{   
    string a;
    cin >> a;
    while (a!="0"){
        SetFunc s;
        string b, op;
        cin >> b;
        while (b!="}"){
            s.parseSet(b);
            cin >> b;
        }
        cin >> op;
        set<int> sb;
        cin >> b;
        while (b!="}"){
            if (b!="{") sb.insert(stoi(b));
            cin >> b;
        }
        if (op=="+") {
            set<int> uni=s.getUnion(sb);
            s.printSet(uni);
        }
        else if (op=="-"){
            set<int> di=s.getDifference(sb);
            s.printSet(di);
        }
        else if (op=="*"){
            set<int> inter=s.getIntersection(sb);
            s.printSet(inter);
        }
        cin >> a;
    }
    return 0;
}