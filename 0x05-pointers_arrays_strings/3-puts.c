#include "main.h"
/**
 * _puts - a function to print a string
 * @str: the string
 * Return: Nothing, it's a void function
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
