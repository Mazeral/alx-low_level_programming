#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * argstostr - concats all args
 * @ac: Argument count
 * @av: Argument vector
 * Return: The concated string
 */

char *argstostr(int ac, char **av)
{
int i = 0;
char *s;
size_t size = 0;
for (; i < ac; i++)
size += strlen(av[i]);

s = (char *) malloc(size + 1);

for (i = 0; i < ac; i++)
concat(s, av[i]);

s[size] = '\0';

return (s);
}
