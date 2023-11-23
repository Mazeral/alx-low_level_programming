#include "main.h"

/**
 * set_bit - adds a bit in the index
 * @n: The number to put the bit in
 * @index: The index of the bit
 * Return: The number after the edit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1, i = 0;

	if (index > 32)
		return (-1);
	for (; i < index; i++)
		bit *= 2;

	*n = bit | *n;
	return (1);
}
