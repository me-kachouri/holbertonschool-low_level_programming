#include "holberton.h"

/**
 * _islower - test character if its lower or upper case
 * @c: The character to test
 * Return: 1 if lower case ; 0 otherwise
 */

int _islower(int c)
{
int i;
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
return (0);
}
