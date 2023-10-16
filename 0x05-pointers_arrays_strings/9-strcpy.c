#include "main.h"
#include<stdio.h>

/**
 * _strcpy - a function that copies a string
 * @dest: the copy
 * @src: the copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
int len = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
len++;
}
dest[len - 1] = '\0';
}
