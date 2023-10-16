#include "main.h"
#include<math.h>

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: Nothing, its a void function
 */

void rev_string(char *s)
{
int len = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
char str[] = s;
for (i = len - 1; i >= 0; i--)
{
int location = abs((len - 1) - i);
str[location] = s[i];
}
}
