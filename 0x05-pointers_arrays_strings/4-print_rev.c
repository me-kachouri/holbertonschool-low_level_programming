#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: string pointer
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
