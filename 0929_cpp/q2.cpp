#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, maxnum=-2147483648, minnum=2147483647;
	cin >> n;
    int* numarr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> numarr[i];
        if (numarr[i]>maxnum) maxnum=numarr[i];
        if (numarr[i]<minnum) minnum=numarr[i];
    }
    cout << "min: " << minnum << "\nmax: " << maxnum << "\n";
    delete[] numarr;
	return 0;
}
