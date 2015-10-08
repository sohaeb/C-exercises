#include <stdio.h>

int power(int exponent, int base);
int main()
{

int user, power1;

printf("Enter a number: ");

scanf("%d", &user);
scanf("%d", &power1);

//int x = power(user,power1);
//printf("x = %d", x);

printf("%d",power(user, power1));

}

int power(int exponent, int base){

int i, total=1;

if (base == 0)
return 1;

for (i=1; i<=base; i++){
total = base*total;
}

return total;

}


