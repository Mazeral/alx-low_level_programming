#include"main.h"
/**
 * _puts - print a string
 * @s: the string
 * Return: the string
 */

void _puts(char *str)
{
int i;
int len = _strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
