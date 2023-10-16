#include"main.h"
/**
 * _puts - print a string
 * @s the string
 * Return: the string
 */

int _putchar(char *s)
{
int i = 0;
int len = _strlen(s);
for(;i < len; i++)
write(1, &s, 1);

return (0);
}
