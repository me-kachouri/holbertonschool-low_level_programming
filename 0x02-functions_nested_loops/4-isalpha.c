#include "holberton.h"

/**
 * _isalpha - test character if its lower or upper case
 * @c: The character to test
 * Return: 1 if alphabet ; 0 otherwise
 */

int _isalpha(int c)
{
int i, j;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
{
return (1);
break;
}
else
continue;
}
for (j = 'A'; j <= 'Z'; j++)
{
if (j == c)
{
return (1);
break;
}
else
continue;
}
return (0);
}
