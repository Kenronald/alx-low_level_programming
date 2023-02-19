#include<time.h>
#include<stdlib.h>
/**
*main - A program that prints lower letters
*Return: 0 (Exit_SUCCESS)
*/
int main(void)
{
int i, c;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
