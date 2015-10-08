#include <stdio.h>
#include <string.h>

int main(){

	char A[]="Hello";
	char B[10];
	strcpy(B,A);
	printf("A=%s\nB=%s\n",A,B);

	return 0;
}
