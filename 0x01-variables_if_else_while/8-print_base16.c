#include <stdio.h>
/**
 * main - main function
 * Description: print hexadecimal numbers
 * Return: void
 */
int main(void)
{
int i;
char c;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
