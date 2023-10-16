#include"main.h"
/**
 * _puts - print a string
 * @s: the string
 * Return: the string
 */

void _puts(char *s)
{
int i;
int len = _strlen(s);
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
