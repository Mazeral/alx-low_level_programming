#include<stdlib.h>
#include "function_pointers.h"
/**
 * int_index - a function that looks for an int
 * @size: size of the array
 * @cmp: pointer to the function used to comapre values
 * @array: the elements
 * Return: The number if found, failure if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
return (-1);

for(; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
