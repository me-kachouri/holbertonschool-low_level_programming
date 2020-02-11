#include "holberton.h"

/**
 * print_times_table - print the n times table
 * @n: the variable to use
 * Return: void
 */

void print_times_table(int n)
{
if (n <= 15 && n >= 0)
{
int i, j;
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
if ((i * j) > 9 && (i * j) < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((i * j) / 10 + '0');
_putchar((i * j) % 10 + '0');
}
else if (i * j > 99)
{
_putchar(',');
_putchar(' ');
_putchar((i * j) / 100 + '0');
_putchar(((i * j) / 10) / 10 + '0');
_putchar((i * j) % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar((i * j) % 10 + '0');
}
}
_putchar('\n');
}
}
}
