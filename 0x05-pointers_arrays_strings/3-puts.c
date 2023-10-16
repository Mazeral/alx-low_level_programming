#include"main.h"
/**
 * _puts - a function to print a string
 * @str: the string
 * Return: Nothing, it's a void function
 */

void _puts(char *str)
{
int len = _strlen(str);
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
