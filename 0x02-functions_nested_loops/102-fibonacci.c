#include "holberton.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
int i;
long int a = 0, b = 1, s;
printf("1, 2\n");
for (i = 0; i < 50; i++)
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
