#include <iostream>
#include "shapes.h"

using namespace std;

int main(){
    char s;
    cout << "shapes?\n";
    cin >> s;
    while (s!='Q'){
        if (s=='C'){
            int x,y,radius;
            cin >> x >> y >> radius;
            Circle cir;
            cout << "area: " << cir.area(radius) << ", perimeter: " << cir.per(radius) << "\n";
        }
        else if (s=='R'){
            int l,t,r,b;
            cin >> l >> t >> r >> b;
            Rectangle rec;
            cout << "area: " << rec.area(l,t,r,b) << ", perimeter: " << rec.per(l,t,r,b) << "\n";
        }
        cout << "shapes?\n";
        cin >> s;
    }
    return 0;
}