#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
unsigned long long int n = 612852475143, i;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
n /= i;
i--;
}
}
printf("%llu\n", i);
return (0);
}
