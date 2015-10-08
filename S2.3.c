#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ans, skip;
	srand( time(NULL));
	do
	{
	printf("%d", 1 + (rand() % 10));
	printf("\nDo you want another number?");
	scanf("%c%c", &ans, &skip);

}while (ans == 'y' || ans == 'Y');

return 0;

}
