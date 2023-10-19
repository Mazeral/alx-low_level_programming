#include "main.h"
/**
 * _strncpy - similar to strcpy, but with an n
 * @dest: the array to be changed
 * @src: the change
 * @n :The number of letters to be changed
 * Return: dest after change
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (src[j] != '\0' && j < n && dest[i] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
printf('\n');
return (dest);
}
