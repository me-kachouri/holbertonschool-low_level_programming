#include<stdio.h>
/**
 * main - print data type size
 * Description: use printf to print the size of data types
 * Return: void
 */
int main(void)
{
printf("Size of a char: %d byte(s)",sizeof(char));
printf("Size of an int: %d byte(s)",sizeof(int));
printf("Size of a long int: %d byte(s)",sizeof(long));
printf("Size of a long long int: %d byte(s)",sizeof(long long));
printf("Size of a float: %d byte(s)",sizeof(float));
return (0);
}
