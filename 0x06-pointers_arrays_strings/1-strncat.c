#include "holberton.h"

/**
 * *_strncat - concatenate two strings
 * @dest: array pointer
 * @src: array pointer
 * @n: number of characters
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, k, l;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
j++;
l = i + j;
j = 0;
for (k = i; j < l && j < n; k++)
{
dest[k] = src[j];
j++;
}
return (dest);
}
