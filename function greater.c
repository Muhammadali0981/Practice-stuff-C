#include <stdio.h>

int checkslarger(int a, int b){
	if(a>b)
		return a;
	return b;
}

int main(){
	int a, b;
	printf("enter two numbers a, b:\n");
	scanf("%d %d" , &a, &b);
	printf("%d",  checkslarger(a,b));
return 0;
}
