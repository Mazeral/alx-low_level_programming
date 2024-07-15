#include "search_algos.h"

void print_array(int *array, size_t begin, size_t end);
/**
 * binary_search - A binary search function
 * @array: The array to find the element in if exists
 * @size: The size of the array
 * @value: The value to find in the array
 * Return: The value if exists or -1 if it doesn't exist
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, last, begin;

	last = size;
	mid = size / 2;
	begin = 0;
	print_array(array, begin, last);
	while (1)
	{
		if (mid == 0 || mid == last || begin == mid)
			break;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			last = mid;
			mid = last / 2;
		}
		else
		{
			begin = mid;
			mid = (mid + last) / 2;
		}
		print_array(array, begin, last);
	}
	return (-1);
}


/**
 * print_array - prints the array
 * @array: The array to print
 * Return: nothing
 */

void print_array(int *array, size_t begin, size_t end)
{
	size_t i = begin;

	printf("Searching in array: ");
	for (; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
			printf(", ");
	}
	printf("\n");
}
