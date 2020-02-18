#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: string pointer
 * Return: void
 */

void puts_half(char *str)
{
int i = 0, j = 0, n;
while (str[i] != '\0')
i++;
i -= 1;
n = i / 2;
for (j = n + 1; j <= i; j++)
{
if (n % 2 != 0)
_putchar(str[j - 1]);
else
_putchar(str[j]);
}
_putchar('\n');
}
