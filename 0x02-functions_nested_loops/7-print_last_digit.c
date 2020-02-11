#include "holberton.h"

/**
 * print_last_digit - print last digit of n
 * @n: The number to use
 * Return: last digit of n
 */

int print_last_digit(int n)
{
int x;
x = n % 10;
if (x < 0)
{
_putchar(-x + '0');
return (-x);
}
else
{
_putchar(x + '0');
return (x);
}
}
