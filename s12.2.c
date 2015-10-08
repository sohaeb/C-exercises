#include <stdio.h>
int main()
{	
	char buffer[40];
	char password[] = "secret";
	int p=0;
	int match = 1;
	char *ptrBuffer = buffer;
	char *ptrPassword = password;
	scanf("%s", buffer);
	while ( *ptrPassword != '\0'){

	if (*ptrPassword != *ptrBuffer){
		match = 0;
		}

	ptrBuffer++; ptrPassword++;
	}

if (match == 1)
	printf("success");
else
	printf("login incorrect");

	return 0;
}
