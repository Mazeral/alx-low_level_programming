#include"main.h"
/**
 * puts - a function to print a string
 * @str: the string
 * Return: Nothing, it's a void function
 */

void _puts(char *str)
{
int len = _strlen(str);
int i;
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
