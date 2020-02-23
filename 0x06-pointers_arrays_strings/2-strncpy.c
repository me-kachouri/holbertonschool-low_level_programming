#include "holberton.h"

/**
 * *_strncpy - copy a string
 * @dest: array pointer
 * @src: array pointer
 * @n: number of characters
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, l = 0;
while (src[l] != '\0')
l++;
for (i = 0; i < n && i < l; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
