#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the dog
 * @d: Details about the dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name != NULL)
printf("Name: %s", d->name);
else
printf("Name: (nil)");
if (d->age != NULL)
printf("Age: %d", d->age);
else
printf("Age: (nil)");
if (d->owner != NULL)
printf("Owner: %s", s->owner);
else
printf("Owner: (nil)");
}
}
