#include<stdlib.h>
#include<stdio.h>

/**
 * _calloc - a function which mallocs but with zeros
 * @nmemb: Numbers of places.
 * @size: The size of the pointer
 * Return: A void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0;
void *p = malloc(nmemb * size);
for (; i < nmemb; i++)
p[i] = 0;
return (p);
}
