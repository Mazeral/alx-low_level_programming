#include<stdlib.h>
#include "main.h"
#include<stdio.h>

/**
 * malloc_checked - return pointer to allocated memory
 * @b: The pointer?
 * Return: Nothing, it's a void function
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
