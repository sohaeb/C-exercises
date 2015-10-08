#include <stdio.h>
int main()
{

int A[5]; 
int *ptrA;
ptrA= A;
int i;

for (i=0;i<5;i++)
	{

		*ptrA=0;
		ptrA++;
		printf("%d\n", A);
	}

}
