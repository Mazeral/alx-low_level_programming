#include "main.h"
/**
 * _strncat -  similar to strcat but it will concat liminted chars
 * @dest: original string
 * @src: the string to be concated
 * @n: number of chars
 * Return: concated string
 */
char *_strncat(char *dest, char *src, int n)
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
for (; src[i] != && i < n '\0'; i++)
{
concated[l] = src[i];
}
return (concated);
}
}
