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
n = (i - 1) / 2;
for (j = n; j <= i - 1; j++)
{
if (n % 2 != 0)
_putchar(str[j]);
else
_putchar(str[j+1]);
}
_putchar('\n');
}
