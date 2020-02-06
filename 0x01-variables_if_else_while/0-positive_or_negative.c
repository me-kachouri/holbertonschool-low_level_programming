#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Description: test if variable n is greater, lesser or equal to 0
 * Return: void
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
printf("%d is zero\n", n);
return (0);
}
