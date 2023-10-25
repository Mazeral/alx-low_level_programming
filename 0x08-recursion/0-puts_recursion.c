#include<stdio.h>
#include "main.h"


/**
 * _puts_recursion - a function that prints a string
 * @s: The string
 * Return: The string
 */


void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
return;
}
