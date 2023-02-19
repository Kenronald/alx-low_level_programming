#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints lower letters
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
int i, a;
for (i = '0'; i <= '9'; i++)
{
for (a = i + 1; a <= '9'; a++)
{
if (i != a)
{
putchar(i);
putchar(a);
if (i == '8' && a == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
