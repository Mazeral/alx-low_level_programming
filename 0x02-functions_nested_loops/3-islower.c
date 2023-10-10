#include"main.h"
#include<string.h>
/**
 * my_print - a custom function for printing easily
 * @t: the parameter that recieves the char array
 * Return: Nothing
 */
void my_print(char t[])
{
int i;
int len = strlen(t);
for (i = 0; i < len; i++)
{
putchar(t[i]);
}
}
/**
 *  _islower - the solution prototype
 * @c: Takes the character
 * Return: either 1 or 0 depending on the input
 */
int _islower(int c)
{
if (c > 96)
{
return (1);
}
return (0);
}
