#include"main.h"

/**
 * clear_bit - clears a bit at a given index
 * @n: The number
 * @index: The index of the number
 * Return: 1 in success, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1, i = 0;

	if (index > 32)
		return (-1);
	for (; i < index; i++)
		x *= 2;
	*n = (~x) & *n;
	return (1);
}
