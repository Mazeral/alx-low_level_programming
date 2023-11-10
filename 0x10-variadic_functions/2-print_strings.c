#include<string.h>
#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: Seperates the strings
 * @n: The number of args
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
char *s;
int end = 1;
va_start(args, n);
if (separator == NULL)
return;
for (; i < n; i++)
{
s = va_arg(args, char*);
if (end < n)
{
if (s == NULL)
printf("(nil)%s ", separator);
else
printf("%s%s", s, separator);
}
else
{
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
end++;
}
va_end(args);
}
