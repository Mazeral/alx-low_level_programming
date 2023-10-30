#include <stdio.h>
#include<stdlib.h>
#include "main.h"


/**
 * create_array - a function that creates an array with a char in the start
 * @size: Size of the array
 * @c: The char
 * Return: Null or the first char
 */


char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
size_t s = size;
char charr = malloc(s);
charr[0] = c;
return (charr[0]);
}
