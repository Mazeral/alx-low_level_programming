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
unsigned int size = 0;
char *s = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size = strlen(s1) + strlen(s2) + 1;
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
s[i] = s1[i];

for (j = 0; j < n && s2[j] != '\0'; j++)
{
s[i] = s2[j];
i++;
}

s[i] = '\0';
return (s);
}
