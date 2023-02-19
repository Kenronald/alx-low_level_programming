#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program to determine if number is positive or not
*Return: 0 (EXIT_SUCCESS)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
