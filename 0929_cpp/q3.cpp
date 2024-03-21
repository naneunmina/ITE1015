#include <iostream>
#include <string>

using namespace std;

void swapint(int& n1, int& n2){
    int temp;
    temp = n1;
    n1=n2;
    n2=temp;
}

void swapstring(string& s1, string& s2){
    string temp;
    temp=s1;
    s1=s2;
    s2=temp;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n1, n2;
    string s1, s2;
	cin >> n1 >> n2 >> s1 >> s2;
    cout << "n1 : " << n1 << ", n2: " << n2 << ", s1: "<< s1 << ", s2: " << s2 << "\n";
    swapint(n1,n2);
    swapstring(s1,s2);
    cout << "n1 : " << n1 << ", n2: " << n2 << ", s1: "<< s1 << ", s2: " << s2 << "\n";
	return 0;
}
