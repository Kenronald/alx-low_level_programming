#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints last digits
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
int n, M;
srand(time(0));
n = rand() - RAND_MAX / 2;
M = n % 10;
if (M > 5)
{
printf("Last digit of, %d, is, %d, and is greater than 5\n", n, M);
}
else if (M == 0)
{
printf("Last digit of, %d, is, %d, and is 0\n", n, M);
}
else if (M != 0 && M < 6)
{
printf("Last digit of, %d, is, %d, and is less than 6 and not 0\n", n, M);
}
return (0);
}
