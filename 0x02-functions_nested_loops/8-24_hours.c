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
char zeros[] = "00"
int i, j, k, l;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
putchar(i);
putchar(j);
putchar(':');
putchar(k);
putchar(l);
putchar('\n');
}
}
}
}
}
