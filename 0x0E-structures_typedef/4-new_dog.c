#include<stdlib.h>
#include <string.h>
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
dog_t *dog;
char *dog_name;

char *owner_name;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(*dog));

dog_name = malloc((strlen(name) + 1) * sizeof(char));
owner_name = malloc((strlen(owner) + 1) * sizeof(char));

strcpy(dog_name, name);
strcpy(owner_name, owner);

dog->name = dog_name;
dog->owner = owner_name;

return (dog);
}
