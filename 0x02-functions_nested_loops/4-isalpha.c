#include"main.h"
#include<string.h>
#include<stdio.h>
/**
 * my_print - a custom function for printing easily
 * @t: the parameter that recieves the char array
 * Return: Nothing
 */
void my_print(char t[])
{
int i;
int len = strlen(t);
for (i = 0; i < len; i++)
{
putchar(t[i]);
}
}
/**
 * _isalpha - the solution function
 * @c: The param that takes the input
 * Return: (1) or (0)
 */

int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
return (0);
}
