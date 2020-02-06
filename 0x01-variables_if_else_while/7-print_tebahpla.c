#include <stdio.h>
/**
 * main - main function
 * Description: print alphabets in reverse using putchar
 * Return: void
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
