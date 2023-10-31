#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * argstostr - strcats all args
 * @ac: Argument count
 * @av: Argument vector
 * Return: The strcated string
 */

char *argstostr(int ac, char **av)
{
int i = 0;
char *s;
size_t size = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (; i < ac; i++)
size += strlen(av[i]);

s = (char *) malloc(size + ac + 1);

for (i = 0; i < ac; i++)
{
strcat(s, av[i]);
strcat(s, "\n");
}
s[size + ac] = '\0';

return (s);
}
