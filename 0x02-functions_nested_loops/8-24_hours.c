#include<stdio.h>
#include"main.h"
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
