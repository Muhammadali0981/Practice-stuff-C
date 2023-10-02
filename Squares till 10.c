#include<stdio.h>
// this code prints the squares of numbers till n numbers
int main(){
	int a[10];
	int b;
	b=0;
	while (b<10){
		a[b]=(b+1)*(b+1);
		printf("%d\n" , a[b]);
		b=b+1;
	}
}
