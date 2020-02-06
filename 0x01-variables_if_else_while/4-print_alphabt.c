#include <stdio.h>
/**
 * main - main function
 * Description: print alphabets without e and q using putchar
 * Return: void
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
