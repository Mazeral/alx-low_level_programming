#include<stdarg.h>
#include "variadic_functions.h"
#include<stdlib.h>
#include <stdio.h>

/**
 * print_all - a function that prints everything
 * @format: The type of the arg
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
int i = 0;
const char * const f = format;
while (format[i] != '\0')
{
if (format[i] == 'c')
{
printf('%c', va_arg(args, int));
}
if (format[i] == 'i')
{
printf('%d,' va_arg(args, int));
}
if (format[i] == 'f')
{
printf('%f', va_arg(args, double));
}
if (format[i] == 's')
{
printf('%s', va_arg(args, char*));
}
i++;
}
va_end(args);
}
