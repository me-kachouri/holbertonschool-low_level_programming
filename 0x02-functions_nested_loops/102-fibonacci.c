#include "holberton.h"
#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5
 * Return: 0
 */

int main(void)
{
int i;
long int a = 1, b = 2, s;
printf("1, 2\n");
for (i = 4; i < 50; i++)
{
s = a + b;
a = b;
b = s;
if (i < 49)
printf("%li, ", s);
else
printf("%li", s);
}
printf("\n");
return (0);
}
