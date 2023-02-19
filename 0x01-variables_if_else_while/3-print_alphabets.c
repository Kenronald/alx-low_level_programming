#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints lower letters
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
char c;
for(c = 'a'; c <= 'z'; c++)
{
putchar(c);
putchar('\n');
}
return (0);
}
