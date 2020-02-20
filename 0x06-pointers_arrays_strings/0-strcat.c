#include "holberton.h"

/**
 * *_strcat - concatenate two strings
 * @dest: array pointer
 * @src: array pointer
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0, k, l;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
j++;
l = i + j;
j = 0;
for (k = i; k <= l; k++)
{
if (j != l - i)
{
dest[k] = src[j];
j++;
}
}
return (dest);
}
