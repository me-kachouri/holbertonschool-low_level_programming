#include "holberton.h"

/**
 * *string_toupper - convert a string to uppercase
 * @s: string pointer
 * Return: string pointer
 */

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
}
return (s);
}
