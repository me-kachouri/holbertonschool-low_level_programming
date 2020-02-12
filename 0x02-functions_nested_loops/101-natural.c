#include "holberton.h"
#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5
 * Return: 0
 */

int main(void)
{
int i, x;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
x += i;
}
}
printf("%d\n", x);
return (0);
}
