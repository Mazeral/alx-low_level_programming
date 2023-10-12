#include "main.h"
/**
 * print_diagonal - a function that print backslashes
 * @n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;
if (i > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
}
