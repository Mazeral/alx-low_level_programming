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
int min, hour;
for (hour = 0; hour <= 23; hour++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar(10);
}
}
}
