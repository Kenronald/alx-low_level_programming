#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints lower letters skipping e and q
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'e' || c == 'q')
{
continue;
}
else
{
putchar(c);
}
}
putchar('\n');
return (0);
}
