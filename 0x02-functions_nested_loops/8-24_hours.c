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
 * jack_bauer - a nested loop function
 * @void: Nothing worth mentioning
 * Return: Void
 */
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
