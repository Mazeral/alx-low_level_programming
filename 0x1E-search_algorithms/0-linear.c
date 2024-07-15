#include "search_algos.h"
/**
 * linear_search - a linear search algorithm function
 * @array: The array to search in
 * @size: The size of the array
 * @value: The value in the array
 * Return: The element if exists or -1 if it doesn't exist
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
