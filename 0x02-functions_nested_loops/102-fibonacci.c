#include "holberton.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
int i;
unsigned long a = 1, b = 2, s;
printf("1, 2, ");
for (i = 1; i < 49; i++)
{
s = a + b;
a = b;
b = s;
if (i < 48)
printf("%li, ", s);
else
printf("%li", s);
}
printf("\n");
return (0);
}
