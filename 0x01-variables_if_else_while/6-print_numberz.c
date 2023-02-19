#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints numbers 0 - 9
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(48 + i);
}
putchar('\n');
return (0);
}
