#include<stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all passed ints
 * @n: The number of arguments
 * Return: The sum
 */
 
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int i = 0;
va_list args;
va_start(args, n);
if (n == 0)
return (0);

for (; i < n; i++)
sum += va_arg(args, int);

return (sum);
}

