#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocated memory
 * @ptr: The pointer
 * @old_size: the old size of the pointer
 * @new_size: the new size of the pointer
 * Return: the new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p = NULL;
if (new_size > old_size && ptr != NULL)
{
void *p = malloc(new_size);
p = ptr;
return (p);
}
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
if (old_size == new_size)
return (ptr);
if (new_size == 0)
return (NULL);
}
