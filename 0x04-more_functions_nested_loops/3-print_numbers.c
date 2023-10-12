#include<string.h>
/**
 * print_numbers - prints the print_numbers
 * @void:nothing
 * Return: void
 */

void print_numbers(void)
{
char *s = "123456789\n";
int len = strlen(s);
int i;
for(i = 0; i < len; i++)
{
_putchar(s[i]);
}
}
