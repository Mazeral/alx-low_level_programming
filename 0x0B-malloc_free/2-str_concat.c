#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * check_null -  a function to check the null values in the parameters
 * @s1: The first param
 * @s2: The second param
 * Return: Depending on the values
 */
char *check_null(char *s1, char *s2)
{
size_t size;
char *concated;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
else if (s1 != NULL && s2 == NULL)
{
size = 1 + strlen(s1);
concated = malloc(size);
strcpy(concated, s1);
return (concated);
}
else if (s1 == NULL && s2 != NULL)
{
size = 1 + strlen(s2);
concated = malloc(size);
strcpy(concated, s2);
return (concated);
}
if (concated == NULL)
{
return (NULL);
}
return ('\0');
}
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
size_t size;
check_null(s1, s2);
size = 1 + strlen(s1) + strlen(s2);
concated = malloc(size);
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
