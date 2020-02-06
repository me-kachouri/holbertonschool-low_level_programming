#include <stdio.h>
/**
 * main - main function
 * Description: print alphabets in upper and lower using putchar
 * Return: void
 */
int main(void)
{
char c, C;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (C = 'A'; C <= 'Z'; C++)
{
putchar(C);
}
putchar('\n');
return (0);
}
