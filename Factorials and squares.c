#include <stdio.h>

int main() {
// this code prints the factorail of numbers from zero till n numbers
    int s[1000];
	int k ; 

	long long int f[1000], g;
	int n,i,j;
	printf("please enter till where do you want the factorials and squares=");
	scanf("%d",&n);
	printf("%-4s%14s", "squares" ,"factorials" "\n");
	i=1;
	while(i<=n){
	    s[i]=(i)*(i);
		
		j=i;
		g=1;
		while(j>0){
			g=g*j;
			j--;
		}
		f[i]=g;
		printf("%-4d%16lld\n", s[i], f[i]);
		i++;
	}
}
