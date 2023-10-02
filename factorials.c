#include<stdio.h>
// this code prints the factorail of numbers from zero till n numbers
int main(){
	long long int a[1000], f;
	int n,i,j;
	printf("please enter till where do you want the factorials=");
	scanf("%d",&n);
	a[0]=1;
	printf("%lld\n",a[0]);
	i=1;
	while(i<=n){
		j=i;
		f=1;
		while(j>0){
			f=f*j;
			j--;
		}
		a[i]=f;
		printf("%lld\n", a[i]);
		i++;
	}
}
