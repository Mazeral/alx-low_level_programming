#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * my_print - the printing functions
 * @x: where the text comes
 * Return: Nothing
 */
void my_print(char x[])
{
int i;
int len = strlen(x);
for (i = 0; i < len; i++)
{
putchar(x[i]);
}
}
/**
 *  _islower - the solution prototype
 * @c: Takes the character
 * Return: either 1 or 0 depending on the input
 */
int _islower(int c)
{
if (c > 96)
{
return (1);
}
return (0);
}
