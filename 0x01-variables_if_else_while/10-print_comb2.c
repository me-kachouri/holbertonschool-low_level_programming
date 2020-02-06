#include <stdio.h>
/**
 * main - main function
 * Description: print numbers from 00 to 99 sperated by ", " using putchar
 * Return: void
 */
int main(void)
{
int i;
for (i = 0; i <= 99; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
