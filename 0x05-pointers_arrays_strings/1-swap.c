#include "holberton.h"

/**
 * swap_int - swap values of a and b
 * @a: int pointer
 * @b: int pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
