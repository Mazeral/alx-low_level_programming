#include<stdio.h>
#include "variadic_functions.h"
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
va_list valist;
unsigned int count;

va_start(valist, n);
for (count = 0; count < n; count++)
{
printf("%d", va_arg(valist, const unsigned int));
if (separator != NULL && count != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
