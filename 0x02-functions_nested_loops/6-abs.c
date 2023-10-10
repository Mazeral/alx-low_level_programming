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
 * @x: the input
 * Return: absolute value of the input
 */
int _abs(int *a)
{
return (*a < 0 ? -*a: *a;);
}
