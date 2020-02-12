#include "holberton.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
int i;
unsigned long a = 1, b = 2, s, x = 2;
while (s < 4000000)
{
s = a + b;
if (s % 2 == 0)
x += s;
a = b;
b = s;
}
printf("%li\n", x);
return (0);
}
