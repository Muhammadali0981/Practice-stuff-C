#include<stdio.h>
// this code prints the squares of numbers till n numbers
int main(){
	int a[1000];
	int i,n ;
	printf("please enter till where do you want the sqaures=");
	scanf("%d",&n);
	i=0;
	while (i<n){
		a[i]=(i+1)*(i+1);
		printf("%d\n" , a[i]);
		i++;
	
	}
}
