#include<stdlib.h>
#include<string.h>
#include<stdio.h>

/**
 * string_nconcat - a function that concats
 * @s1: The first string
 * @s2: The second string
 * @n: The letters of the second string
 * Return: The concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int j = 0;
unsigned int i = 0;
unsigned int size = strlen(s1) + n;
char *s = malloc(strlen(s1) + n + 1);
if (s == NULL || n < 0)
return (NULL);
for (; i < strlen(s1); i++)
s[i] = s1[i];

for (; j < n && n < strlen(s2); j++)
{
s[i] = s2[j];
i++;
}
s[size] = '\0';
if (s == NULL)
return (NULL);
return (s);
}
