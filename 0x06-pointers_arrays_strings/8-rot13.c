#include "holberton.h"

/**
 * *rot13 - convert a string to rot13
 * @s: string pointer
 * Return: string pointer
 */

char *rot13(char *s)
{
char ch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ch2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; ch1[j] != '\0' && ch2[j] != '\0'; j++)
{
if (s[i] == ch1[j])
{
s[i] = ch2[j];
break;
}
}
}
return (s);
}
