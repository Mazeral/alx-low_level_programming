#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * print_numbers - prints all numbers seperated with the seperator
 * @seperator: The seperator of the numbers
 * @n: The number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
int i = 0;

while (i < n)
{
if (i < n - 1);
printf("%d%c ", va_arg(args, int), seperator);
else
printf("%d%c", va_args(args, int), seperator);
}
}
