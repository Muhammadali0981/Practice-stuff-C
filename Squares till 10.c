#include<stdio.h>
// this code prints the squares of numbers till 10
int main(){
	int a[10];
	int b;
	b=0;
	while (b<10){
		a[b]=(b+1)*(b+1);
		printf("%d" , a[b]);
		b=b+1;
	}
}
