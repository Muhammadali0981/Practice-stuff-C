#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *fptr;
	char buff[100];
	char out[100];
	char* a[3];
	int j=1;

	 for (int i = 0; i < 3; i++) {
        printf("Enter name %d:\n", i + 1);
        a[i] = (char *)calloc(100 ,sizeof(char)); // Allocate memory for each string

        fgets(a[i], 100, stdin); // Read input using fgets
        a[i][strcspn(a[i], "\n")] = '\0'; // Remove the newline character
    }


	//Open a file in writing mode
	fptr = fopen("hello.txt", "w");

	sprintf(buff, "%s %s %s\n", a[0],a[1],a[2]);
	fputs(buff,fptr);

	//Close the file
	fclose(fptr); 

	fptr = fopen("hello.txt", "r");



	while (!feof(fptr)) {
 
        fread(out, sizeof(out), 1, fptr);
        
       
    }
	
	fclose(fptr);

	out[sizeof(out)] = '\0';

	char* token = strtok(out," ");

	while (token != NULL) {

	printf("%d.", j);
	puts(token);

	token = strtok(NULL, " "); // Get the next token
	j++;

	}

	//printf("file contents are:\n");

	//

}