#include "holberton.h"
#include <stdio.h>

/**
 * main - print the sum of all even fibonacci numbers under 4000000
 * Return: 0
 */

int main(void)
{
int i;
unsigned long a = 1, b = 2, s = 0, x = 2;
while (s <= 4000000)
{
s = a + b;
a = b;
b = s;
if (s % 2 == 0)
x += s;
}
printf("%li\n", x);
return (0);
}
