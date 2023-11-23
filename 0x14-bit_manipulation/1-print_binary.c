#include "main.h"

/**
 * print_binary - prints the binary representation of the number
 * @n: The number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
while (n != 0)
{
if (n & 1)
printf("1");
else
printf("0");
n = n >> 1;
}
}
