#include"main.h"
/**
 * _puts - print a string
 * @s: the string
 * Return: the string
 */

void _puts(char *s)
{
int i = 0;
int len = _strlen(s);
for (; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
