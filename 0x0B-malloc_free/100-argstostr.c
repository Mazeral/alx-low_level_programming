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
if (ac == 0 || av == NULL)
return (NULL);
int i = 0;
char *s;
size_t size = 0;
for (; i < ac; i++)
size += strlen(av[i]);

s = (char *) malloc(size + ac + 1);

for (i = 0; i < ac; i++)
{
concat(s, av[i]);
concat(s, '\n');
}
s[size + ac] = '\0';

return (s);
}
