#include "main.h"
/**
 * cap_string - a function to cap every word.
 * @s: the string.
 * Return: A string with the same words, captilized.
 */

char *cap_string(char *s)
{
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] -= 32;
}
int i = 0;
int j;
char list[] = {' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}', '\0'};
while (s[i] != '\0')
{
if (i - 1 >= 0)
{
for (j = 0; list[j] != '\0'; j++)
{
if (s[i] == list[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
}
i++;
}
return (s);
}
