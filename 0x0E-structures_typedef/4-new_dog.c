#include<stdlib.h>
#include<stdio.h>
#include "dog.h"

/**
 * new_dog - defines a new dog
 * @name: The name of the dog
 * @age: The age of it
 * @owner: The owner
 * Return: a object of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t dog;
char *dog_name = name;
char *owner_name = owner;
if (name == NULL || owner == NULL)
return (NULL);
dog->name = dog_name;
dog->age = age;
dog->owner = owner_name;
return (dog);
}
