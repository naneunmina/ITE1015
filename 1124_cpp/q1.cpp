#include <iostream>
#include <string>

template<typename T>
void myswap(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}


using namespace std;

int main(){
    int ia, ib;
    double da, db;
    string sa, sb;
    cin >> ia >> ib;
    myswap(ia,ib);
    cout << "After calling myswap() : " << ia << " " << ib << "\n";
    cin >> da >> db;
    myswap(da,db);
    cout << "After calling myswap() : " << da << " " << db << "\n";
    cin >> sa >> sb;
    myswap(sa,sb);
    cout << "After calling myswap() : " << sa << " " << sb << "\n";
	return 0;
}