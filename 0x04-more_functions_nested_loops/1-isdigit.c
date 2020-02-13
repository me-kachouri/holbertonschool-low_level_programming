#include "holberton.h"

/**
 * _isdigit - test character if its a digit
 * @c: The character to test
 * Return: 1 if upper case ; 0 otherwise
 */

int _isdigit(int c)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i == c)
{
return (1);
break;
}
else
continue;
}
return (0);
}
