#include <iostream>

using namespace std;

void magicsquare(int n, int** arr){
    int y=0, x=n/2;
    for (int i=1; i<=n*n; i++){
        arr[y][x]=i;
        if (arr[(y-1+n)%n][(x+1)%n]!=0) y++;
        else {
            y=(y-1+n)%n;
            x=(x+1)%n;
        }
    }
}

int main(){
    int n;
    cin >> n;
    if (n%2==0||n<3) return 0;
    int** arr = new int*[n];
    for(int i = 0; i < n; i++)
        arr[i] = new int[n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }
    magicsquare(n,arr);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    for(int i=0; i<n; i++)
    	delete[] arr[i];
    delete[] arr;
	return 0;
}
