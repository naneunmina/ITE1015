#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
	int temp=*pa;
	*pa=*pb;
	*pb=*pc;
	*pc=temp;
}

void rotateRight(int* pa, int* pb, int* pc){
	int temp=*pc;
	*pc=*pb;
	*pb=*pa;
	*pa=temp;
}

int main(){
	int a=10, b=20, c=30, n;
	printf("%d:%d:%d\n",a,b,c);
	scanf("%d",&n);
	while(n==1||n==2){
		if (n==1) {
			rotateLeft(&a,&b,&c);
			printf("%d:%d:%d\n",a,b,c);
		}
		else if (n==2) {
			rotateRight(&a,&b,&c);
			printf("%d:%d:%d\n",a,b,c);
		}
		scanf("%d",&n);
	}
	return 0;
}
