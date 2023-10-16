#include "main.h"
#include<math.h>

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: Nothing, its a void function
 */

void rev_string(char *s)
{
int len1; 
int len = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
len1 = len - 1;
for (i = 0; i < len / 2; i++)
{
char tmp = s[i];
s[i] = s[len1 - i];
s[len1 - i] = tmp;
}
}
