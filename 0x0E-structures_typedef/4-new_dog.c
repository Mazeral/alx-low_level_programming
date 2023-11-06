#include<stdlib.h>
#include<stdlib.h>
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
char *dog_name = name;
char *owner_name = owner;
if (name == NULL || owner == NULL)
return (NULL);
dog_t dog = {dog_name, age, owner_name};
return (dog);
}
