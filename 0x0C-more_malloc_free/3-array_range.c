#include<stdlib.h>
#include<stdio.h>

/**
 * array_range - creates an array of ints
 * @min: The start of the array
 * @max: The end of the array
 * Return: The array from min to max if success, NULL in case of failure
 */

int *array_range(int min, int max);
{
int size = max - min;
int i = 0;

int *arr = malloc(size * sizeof(int));
if (size < 0)
return (NULL);
for (; i < size && min <= max; i++)
{
arr[i] = min;
min++;
}
}
