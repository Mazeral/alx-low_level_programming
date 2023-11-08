#include<stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter on each element of an array.
 * @array: The array
 * @action: The function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || action == NULL)
return;

for(; i < size; i++)
{
if (action(array[i] == NULL)
return;
else
action(array[i]);
)
}
}
