#include "main.h"
/**
 * _print_rev_recursion - prints the string in reverse
 * @s: The string
 * Return: the function or nothing
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
