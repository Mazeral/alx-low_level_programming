#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The entry point
 * Return: Always success (0)
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("Last digit of %d is greater than 5\n")
}
if (last < 6)
{
printf("Last digit of %d is less than 6 and not 0\n")
}
if (last == 0)
{
printf("Last digit of %d is 0\n")
}
return (0);
}
