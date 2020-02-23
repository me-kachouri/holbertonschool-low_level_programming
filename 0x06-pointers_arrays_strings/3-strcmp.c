#include "holberton.h"

/**
 * _strcmp - copy a string
 * @s1: array pointer
 * @s2: array pointer
 * Return: 0 if s1 = s2, < 0 if s1 < s2, > 0 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, x;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
for (k = 0; k < i && k < j; k++)
{
if (s1[k] == s2[k])
continue;
else
break;
}
x = s1[k] - s2[k];
return (x);
}
