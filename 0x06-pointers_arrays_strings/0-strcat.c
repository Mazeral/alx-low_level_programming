#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strcat - A function that concats 2 stirngs
 * @dest: The original string
 * @src: The string which to be added to the original string
 * Return: concated string
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
