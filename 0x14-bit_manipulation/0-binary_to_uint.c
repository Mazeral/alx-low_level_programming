#include "main.h"

/**
 * binary_to_uint - turns the binary number to a decimal
 * @b: The string containing the binary number
 * Return: The decimal
 */

unsigned int binary_to_uint(const char *b)
{
unsigned len = strlen(b), sum = 0;
int i;
for (i = len; i >= 0; i--)
{
if (b[i] == '0' || b[i] == '1')
{
if (b[i] == '1')
{
sum = sum + pow(2, (len - i));
}
}
else
{
return (0);
}
}
return (sum);
}
