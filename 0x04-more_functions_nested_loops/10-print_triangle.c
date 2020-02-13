#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of \
 * Return: void
 */

void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 1; j < size + 1; j++)
{
if (j < size - i)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
