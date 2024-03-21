#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
    return a+b;
}

string add(string a, string b){
    string temp;
    temp+=a+"-"+b;
    return temp;
}

int main(){
    int num1, num2;
	string str1, str2;
    cin >> num1 >> num2 >> str1 >> str2;
    cout << add(num1,num2) << "\n";
    cout << add(str1, str2) << "\n";
	return 0;
}
