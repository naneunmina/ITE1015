#include <iostream>
#include <string>

#include "shapes.h"

using namespace std;

int main(void)
{
    int w, h;
    cin >> w >> h;
    string a;
    cin >> a;
    while(a!="quit"){
        if (a=="square"){
            int x, y, len;
            char b;
            cin >> x >> y >> len >> b;
            Square n(x,y,len,b);
            cout << "Area: " << n.GetArea() << "\n";
            cout << "Perimeter: " << n.GetPerimeter() << "\n";
            n.Draw(w,h);
        }
        else if (a=="rect"){
            int x, y, width, height;
            char b;
            cin >> x >> y >> width >> height >> b;
            Rectangle n(x,y,width,height,b);
            cout << "Area: " << n.GetArea() << "\n";
            cout << "Perimeter: " << n.GetPerimeter() << "\n";
            n.Draw(w,h);
        }
        else if (a=="diamond"){
            int x, y;
            double dis;
            char b;
            cin >> x >> y >> dis >> b;
            Diamond n(x,y,dis,b);
            cout << "Area: " << n.GetArea() << "\n";
            cout << "Perimeter: " << n.GetPerimeter() << "\n";
            n.Draw(w,h);
        }
        cin >> a;
    }
    return 0;
}