#include "main.h"
/**
 * puts_half - a function that prints the second half of a string
 * @str: The string
 * Return: Nothing
 */

void puts_half(char *str)
{
int n;
int i = 0;
int len = 0;
for (; str[i] != '\0'; i++)
{
len++;
}
n = (len - 1) / 2;

for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
