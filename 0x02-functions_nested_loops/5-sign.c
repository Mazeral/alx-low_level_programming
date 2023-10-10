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
 * print_sign - the solution function
 * @n: The paramter of the number to be examined
 * Return: either (1), (0), or (-1)
 */
int print_sign(int n)
{
if (n > 0)
return (1);
if (n == 0)
return (0);
if (n < 0)
return (-1);
}
