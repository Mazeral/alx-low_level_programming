#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strcat - A function that concats 2 stirngs
 * @dest: The original string
 * @src: The string which to be added to the original string
 * Return: (concated) string
 */
char *_strcat(char *dest, char *src)
{
char  *p;
p = mempcpy(dst, src, strlen(src));
*p = '\0';
return (p);
}
