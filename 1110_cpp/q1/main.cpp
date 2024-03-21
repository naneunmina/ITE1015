#include "shape.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<Shape*> arr;
    char c;
    double w,h;
    while(cin>>c&&c!='0'){
        cin >> w >> h;
        if (c=='r'){
            Shape* rect = new Rectangle(w,h);
            arr.push_back(rect);
        }
        else if (c=='t'){
            Shape* tri = new Triangle(w,h);
            arr.push_back(tri);
        }
    }
    for (int i=0; i<arr.size(); i++){
        cout << arr[i]->getArea() << "\n";
    }
    for (int i=0; i<arr.size(); i++){
        delete arr[i];
    }
    return 0;
}