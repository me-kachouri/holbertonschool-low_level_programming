#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - copy string from src to dest
 * @dest: array pointer
 * @src: number of array elements
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0, j = 0;
while (src[i] != '\0')
i++;
for (j = 0; j <= i; j++)
dest[j] = src[j];
return (dest);
}
