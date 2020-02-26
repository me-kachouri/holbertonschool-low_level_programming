#include "holberton.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: string pointer
 * Return: string pointer
 */

char *cap_string(char *s)
{
int i, j;
char ch[] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};

if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; ch[j] != '\0'; j++)
{
if (s[i] == ch[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
}
}
return (s);
}
