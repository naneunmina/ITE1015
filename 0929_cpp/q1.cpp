#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
    int* numarr = new int[n];
    for (int i=0; i<n; i++) numarr[i]=i;
    for (int i=0; i<n; i++) cout << numarr[i] << " ";
    cout << "\n";
    delete[] numarr;
	return 0;
}
