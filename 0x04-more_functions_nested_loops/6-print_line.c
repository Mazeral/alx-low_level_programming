#include"main.h"
/**
 * print_line - the function of line printing
 * @n: number of lines
 * Return: Nothing
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
}
_putchar('\n');
}
