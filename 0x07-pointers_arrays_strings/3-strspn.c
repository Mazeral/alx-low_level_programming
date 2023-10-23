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
unsigned int cnt = 0;
int i = 0;
while (s[i] != '\0')
{
int j = 0;
while (s[i] != accept[j])
{
j++;
}
if (s[i] == accept[j])
break;
i++;
}

for (; s[i] != '\0'; i++)
{
cnt++;
}

return (cnt);
}
