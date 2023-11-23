#include "main.h"

/**
 * flip_bits - bits you need to flip in order to get from one number to other
 * @n: the number
 * @m: The number to reach
 * Return: Number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, flips = 0;

	while (x != 0)
	{
		if ((x & 1) == 1)
		flips++;
		x = x >> 1;
	}
	return (flips);
}
