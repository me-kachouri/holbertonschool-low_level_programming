#include "holberton.h"

/**
 * _isupper - test character if its upper case
 * @c: The character to test
 * Return: 1 if upper case ; 0 otherwise
 */

int _isupper(int c)
{
int i;
for (i = 'A'; i <= 'Z'; i++)
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
