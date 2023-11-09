#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * print_numbers - prints all numbers seperated with the seperator
 * @separator: The separator of the numbers
 * @n: The number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
int i = 0;
for (; i < n; i++)
{
if (i + 1 == n)
_putchar(va_arg(args, int));
else
{
_putchar(va_arg(args, int));
_putchar(separator);
}
}
}
