#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers from n to 98
 * @n: first variable
 * Return: void
 */

void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 99; i++)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d", i);
}
printf("\n");
}
else
{
for (i = n; i > 97; i--)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d", i);
}
printf("\n");
}
}
