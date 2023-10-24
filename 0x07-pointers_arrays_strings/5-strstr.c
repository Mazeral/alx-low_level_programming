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

bool found = false;
int i = 0;
int j = 0;
for (; needle[i] != '\0'; i++)
{
if (found)
break;
for (j  = 0; haystack[j] != '\0'; j++)
{
if (needle[i] == haystack[j])
{
int k = i;
int l = j;
for (; needle[k] != '\0' && haystack[l] != '\0';)
{
if (needle[k] == haystack[l])
{
l++;
k++;
}
else
{
break;
}
if (needle[k + 1] == '\0')
{
found = true;
i = k + 1;
}
}
}
}
}
if (found == false)
return (NULL);
return (haystack + i);
}
