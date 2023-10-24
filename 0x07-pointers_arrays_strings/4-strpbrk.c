#include<stdio.h>
#include<stdbool.h>
#include "main.h"

/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: The string
 * @accept: The serach
 * Return: return a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[j] == accept[i])
break;
j++;
}
if (s[j] == accept[i])
break;
i++;
}
i++;
return (s + i);
}
