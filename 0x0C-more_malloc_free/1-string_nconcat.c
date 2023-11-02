#include<stdlib.h>
#include<stdio.h>

/**
 * string_nconcat - a function that concats a str and the n chars of the second str
 * @s1: The first string
 * @s2: The second string
 * @n: The letters of the second string
 * Return: The concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int j = 0;
int i = 0;
unsigned int size = strlen(s1) + n;
char s* = malloc(strlen(s1) + n + 1);
if (s == NULL)
return (NULL);
for (; i < strlen(s1); i++)
s[i] = s1[i];

for(; j < n; j++)
{
s[i] = s2[j];
}
s[size] = "\0";
return (s);
}
