#include "main.h"

/**
 * get_bit - gets the value of the binary in a position
 * @n: The number
 * @index: the index of the binary number in the binary representation
 * Return: The value of the binary in the index in the binary rep of the int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int  x;

	if (index > 32)
		return (-1);
	x = n >> (index - 1);
	if ((x >> 1 && 1) == 1)
		return (1);

	return (0);
}
