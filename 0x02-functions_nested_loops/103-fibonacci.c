#include <stdio.h>

/**
 * main - print the sum of all even fibonacci numbers under 4000000
 * Return: 0
 */

int main(void)
{
unsigned long s = 0, a = 1, b = 2, x = 2;
while (s <= 4000000)
{
s = a + b;
if (s % 2 == 0)
x += s;

a = b;
b = s;
}
printf("%lu\n", x);
return (0);
}

