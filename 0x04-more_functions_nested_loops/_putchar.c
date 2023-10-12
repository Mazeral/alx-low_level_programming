#include<string.h>
/**
 *_putchar - a function that prints chars
 *@s: the string or char to be printed
 *Return: void
 */

void _putchar(char *s)
{
int len  = strlen(s);
int i = 0;
for (; i < len; i++)
{
(write(1, &s[i], 1));
}
}
