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
 * print_last_digit - prints the last digit
 * @x: Takes the input
 * Return: int
 */
int print_last_digit(int x)
{
int lastdigit = x % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (lastdigit);
}
