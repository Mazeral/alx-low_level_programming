#include<stdlib.h>
#include<stdio.h>

/**
 * malloc_checked - return pointer to allocated memory
 * @b: The pointer?
 * Return: Nothing, it's a void function
 */
void *malloc_checked(unsigned int b)
{

void *p = malloc(8);
if(p == NULL)
exit (98);
}
