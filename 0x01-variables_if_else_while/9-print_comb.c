#include <stdio.h>
/**
 * main - main function
 * Description: print numbers from 0 to 9 sperated by ", " using putchar
 * Return: void
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
