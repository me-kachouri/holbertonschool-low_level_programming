#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: array pointer
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
int x, i = 0;
n -= 1;
while (i <= n)
{
x = a[n];
a[n] = a[i];
a[i] = x;
i++;
n--;
}
}
