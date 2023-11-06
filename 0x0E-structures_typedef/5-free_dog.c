#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory of the dog
 * @d: The dog struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
