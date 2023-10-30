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
size_t i = 0;
char *charr;
size_t s = size;
if (size == 0)
return (NULL);
charr = malloc(s * sizeof(char));
for (; i < s; i++)
{
charr[i] = c;
}
free(charr);
return (charr);
}
