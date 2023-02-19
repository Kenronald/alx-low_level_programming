#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints lower letters
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(48 + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
