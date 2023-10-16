#include "main.h"
/**
 * print_rev - prints the reverse of the string
 * @str: the string
 * Return: nothing
 */
void print_rev(char *str)
{
int i;
int len = 0;
for (i = 0; str[i] != '\0'; i++)
{
len++;
}
i = len - 1;
for (; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
