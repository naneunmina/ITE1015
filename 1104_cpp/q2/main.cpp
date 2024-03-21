#include "canvas.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int row, col;
    cin >> row >> col;
    Canvas c(row,col);
    c.Print();
    vector<Shape*> shape;
    string s;
    while(cin>>s&&s!="quit"){
        if (s=="add"){
            cin >> s;
            if (s=="rect"){
                int x, y, width, height;
                char brush;
                cin >> x >> y >> width >> height >> brush;
                Shape* rect = new Rectangle(x,y,width,height,brush);
                rect->Draw(&c);
                shape.push_back(rect);
            }
            else if (s=="tri_up"){
                int x, y, height;
                char brush;
                cin >> x >> y >> height >> brush;
                Shape* ut = new UpTriangle(x,y,height,brush);
                ut->Draw(&c);
                shape.push_back(ut);
            }
            else if (s=="tri_down"){
                int x, y, height;
                char brush;
                cin >> x >> y >> height >> brush;
                Shape* dt = new DownTriangle(x,y,height,brush);
                dt->Draw(&c);
                shape.push_back(dt);
            }
            else if (s=="diamond"){
                int x, y, distance;
                char brush;
                cin >> x >> y >> distance >> brush;
                Shape* dia = new Diamond(x,y,distance,brush);
                dia->Draw(&c);
                shape.push_back(dia);
            }
        }
        else if (s=="dump"){
            for (int i=0; i<shape.size(); i++){
                cout << i << " ";
                shape[i]->Info();
            }
        }
        else if (s=="draw"){
            c.Print();
        }
    }
    vector<Shape*>::iterator iter;
    for (iter=shape.begin(); iter!=shape.end(); iter++){
        delete *iter;
    }
    return 0;
}