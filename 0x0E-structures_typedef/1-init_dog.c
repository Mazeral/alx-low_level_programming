#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * init_dog - The entry point
 * @d: The pointer for the struc
 * @name: Array of char for the name
 * @age: The age of the dog
 * @owner: The owner name
 * Return: Success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
