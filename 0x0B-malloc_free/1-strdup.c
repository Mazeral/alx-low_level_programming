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
if (str == NULL)
return (NULL);
dupstr = malloc(strlen(str));
if (dupstr == NULL)
return (NULL)
return (dupstr);
}
