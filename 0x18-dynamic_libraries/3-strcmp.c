#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int sum = 0;
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
sum += (s1[i] - s2[i]);
if (sum != 0)
break;
i++;
}
return (sum);
}
