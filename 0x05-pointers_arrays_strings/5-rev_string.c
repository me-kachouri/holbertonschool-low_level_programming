#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string pointer
 * Return: void
 */

void rev_string(char *s)
{
char c;
int i = 0, j = 0;
while (s[i] != '\0')
i++;
while (j <= i)
{
c = s[j];
s[j] = s[i - 1];
s[i - 1] = c;
i--;
j++;
}
}
