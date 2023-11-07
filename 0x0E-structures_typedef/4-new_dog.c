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
int i;
char *owner_name;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(*dog));

dog_name = (char *) malloc(strlen(name) * sizeof(char) + 1);
owner = (char *) malloc(strlen(owner) * sizeof(char) + 1);
for(i = 0; name[i] != '\0'; i++)
dog_name[i] = name[i];

for(i = 0; owner[i] != '\0'; i++)
owner_name[i] = owner[i];

for(i = 0; owner_name[i] != '\0'; i++)
dog->owner[i] = owner_name[i];

for(i = 0; dog_name[i] != '\0'; i++)
dog->name[i] = dog_name[i];
dog->age = age;
return (dog);
}
