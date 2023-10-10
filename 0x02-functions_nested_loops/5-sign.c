#include"main.h"
#include<stdio.h>
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
char pos[] = "+1";
char neg[] = "-1";
char zero[] = "00";
if (n > 0)
{
my_print(pos);
return (0);
}
else if (n == 0)
{
my_print(zero);
return (0);
}
else
{
my_print(neg);
return (0);
}
}
