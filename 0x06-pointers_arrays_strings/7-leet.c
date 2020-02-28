#include "holberton.h"

/**
 * *leet - convert a string to 1337
 * @s: string pointer
 * Return: string pointer
 */

char *leet(char *s)
{
char ch1[] = {'a', 'e', 'o', 'l', 't'};
char ch2[] = {'4', '3', '0', '1', '7'};
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; ch1[j] != '\0' && ch2[j] != '\0'; j++)
{
if (s[i] == ch1[j] || s[i] == (ch1[j] - 32))
s[i] = ch2[j];
}
}
return (s);
}
