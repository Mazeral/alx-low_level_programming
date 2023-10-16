#include "main.h"
/**
 * print_rev - prints the reverse of the string
 * @str: the string
 * Return: nothing
 */
void print_rev(char *str)
{
int i = _strlen(str) - 1;
for (; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
