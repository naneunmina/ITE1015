#include "my_container.h"

using namespace std;

int main(void)
{
    int num;
    cin >> num;
    MyContainer<int> i(num);
    cin >> i;
    cout << i;
    cin >> num;
    MyContainer<double> d(num);
    cin >> d;
    cout << d;
    cin >> num;
    MyContainer<string> s(num);
    cin >> s;
    cout << s;
    return 0;
}