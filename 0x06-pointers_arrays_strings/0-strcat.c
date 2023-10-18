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
char *concated[99];
int i = 0;
int l = 0;
for (; dest[i] != '\0'; i++)
{
concated[i] = dest[i];
l++;
}
i = 0;
l++;
for (; src[i] != '\0'; i++)
{
concated[l] = src[i];
}
return (concated);
}
