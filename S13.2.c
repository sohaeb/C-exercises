#include <stdio.h>
#include <string.h>


int main(){

	char A[]="Hello";
	char B[]="world";
	char C[]="test";
	strcat (A,B);
	printf("A=%s\nB=%s\n", A, B);
	if (strcmp (B,C) == 0)
		printf("B & C have the same content\n");
	else
		printf("They are not the same\n");
	return 0;
}
