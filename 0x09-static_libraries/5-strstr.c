#include<stdio.h>
#include<stdbool.h>
#include "main.h"
/**
 * _strstr - a function to find a substring
 * @haystack: where to find
 * @needle: what to find
 * Return: either null or the substring
 */
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
