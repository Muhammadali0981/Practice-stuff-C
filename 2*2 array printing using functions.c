#include <stdio.h>

int a[2][2];
int i,j;
void disInput(){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter element row %d column %d:", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
}
void disPrint(){
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	disInput();
	disPrint();
}
