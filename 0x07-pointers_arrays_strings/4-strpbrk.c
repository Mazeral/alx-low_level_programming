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
for (; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
break;
}
if (accept[j] == s[i])
break;
}
return (s + i);
}
