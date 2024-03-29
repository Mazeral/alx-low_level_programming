#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - A struct for a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner name
 * Description: Simple struct for the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
#endif
