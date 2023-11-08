#include<stdlib.h>
/**
 * print_name - prints a name
 * @name: The name
 * @f: A pointer that points to a function with that takes a string
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return (NULL);

return (f(name));

}
