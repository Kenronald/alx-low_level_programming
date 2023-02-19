#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints lower letters
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
int i, a, b;
for (i = '0'; i <= '9'; i++)
{
for (a = i + 1; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
if ((i != a) != b)
{
putchar(i);
putchar(a);
putchar(b);
if (i == '7' && a == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
