#include "holberton.h"

/**
 * print_sign - test number if its positive, 0 or negative
 * @n: The number to test
 * Return: 1 if n positive, 0 if n zero, -1 if n negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
