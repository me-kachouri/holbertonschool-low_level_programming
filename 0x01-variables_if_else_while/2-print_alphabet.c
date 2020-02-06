#include <stdio.h>
/**
 * main - main function
 * Description: print alphabets using putchar
 * Return: void
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
