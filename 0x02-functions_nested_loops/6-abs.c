#include"main.h"
#include<math.h>
#include<string.h>
#include<stdio.h>
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
 * _abs - the function of the solution
 * @i: the input
 * Return: absolute value of the input
 */
int _abs(int i)
{
if (i > 0)
return (i);
else if (i < 0)
return (-i);
else
return (0);
}
