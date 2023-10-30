#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: The string
 * Return: a pointer if success, NULL if fail
 */
char *_strdup(char *str)
{
char *dupstr;
size_t size;
if (str == NULL)
{
return (NULL);
}
size = strlen(str);
dupstr = malloc((size + 1) * sizeof(char));
if (dupstr == NULL)
return (NULL);
strcpy(dupstr, str);
return (dupstr);
}
