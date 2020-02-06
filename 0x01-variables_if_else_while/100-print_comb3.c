#include <stdio.h>
/**
 * main - main function
 * Description: print different two digit combinations seperated by ", "
 * Return: void
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
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
