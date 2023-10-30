#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * str_concat - Concats 2 strings togther
 * @s1: First string
 * @s2: Second string
 * Return: Null in case of failure or the concated string
 */
char *str_concat(char *s1, char *s2)
{
char *concated;
int i = 0;
int j = 0;
size_t size = 1 + strlen(s1) + strlen(s2);
if (s1 == NULL && s2 == NULL)
{
return ("");
}
else if (strlen(s1) > 0 && s2 == NULL)
{
return (s1);
}

else if (s1 == NULL && strlen(s2) > 0)
{
return (s2);
}
concated = malloc(size);
if (concated == NULL)
{
return (NULL);
}
for (; s1[i] != '\0'; i++)
{
concated[i] = s1[i];
}
for (; s2[j] != '\0'; j++)
{
concated[i] = s2[j];
i++;
}
concated[size] = '\0';
return (concated);
}
