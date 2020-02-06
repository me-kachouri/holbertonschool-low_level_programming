#include <stdio.h>
/**
 * main - main function
 * Description: print numbers from 00 to 99 sperated by ", " using putchar
 * Return: void
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i == '9' && j == '9')
break;
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
