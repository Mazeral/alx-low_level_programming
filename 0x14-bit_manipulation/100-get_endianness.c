#include "main.h"

/**
 * get_endianness - Checks if the system is big endianness or small
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	int sev = 7;

	if (((sev >> 1) & 1) == 1)
		return (1);
	else
		return (0);
}
