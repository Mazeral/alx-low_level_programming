#include<string.h>
/**
 * print_most_numbers - printing a list of numbers
 * @void: void
 * Return: nothing
 */

print_most_numbers(void)
{
char s[] = "01356789\n";
int len = strlen(s);
int i = 0;
for (; i < len; i++)
{
_putchar(s[i]);
}
}

