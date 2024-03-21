#include <iostream>

using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff){
    sum=a+b;
    diff=a-b;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,sum=0, diff=0;
    cin >> a >> b;
    getSumDiff(a,b,sum,diff);
    cout << "sum: " << sum << "\ndiff: " << diff << "\n";
	return 0;
}
