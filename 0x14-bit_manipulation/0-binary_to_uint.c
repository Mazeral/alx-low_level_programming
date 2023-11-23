#include "main.h"

/**
 * binary_to_uint - turns the binary number to a decimal
 * @b: The string containing the binary number
 * Return: The decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = strlen(b) - 1, j, pow;
	if (b == NULL)
		return (0);

	for (; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				pow = 1;
				for (j = 1; j < i; j++)
				pow *= 2;
				sum += pow;
			}
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}