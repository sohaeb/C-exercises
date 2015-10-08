#include <stdio.h>
int Max(int a, int b);
int main()
{
	printf("THe max of 7 and 5 is %d\n", Max(7,5));
	return 0;
}

int Max (int a, int b){

	if (a>b)
		return a;
	else 
		return b;
}
