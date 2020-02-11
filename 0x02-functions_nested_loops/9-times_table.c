#include "holberton.h"

/**
 * times_table - print the 9 times table
 * Return: void
 */

void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
if (i * j > 9)
{
_putchar(',');
_putchar(' ');
_putchar((i * j) / 10 + '0');
_putchar((i * j) % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((i * j) % 10 + '0');
}
}
_putchar('\n');
}
}
