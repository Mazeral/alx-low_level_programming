#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string.
 * @accept: The string where which contains the query
 * Return: an unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int chars= 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
chars++;
break;
}
else if ((accept[i + 1]) == '\0')
return (chars);
}
s++;
}
return (chars);
}
