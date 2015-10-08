#include <stdio.h>

int main(){

int match=1, p=0;
char password[]="secret";
char buffer[50];

scanf ("%s",buffer);

while (password[p] != '\0'){
	
	if (password[p] != buffer[p])
		match =0;
	p++;
}

if (match == 1)
	printf("Success\n");

else
	printf("Incorrect password\n");
}


