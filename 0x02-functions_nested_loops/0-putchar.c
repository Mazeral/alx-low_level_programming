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
 * main - the solution function
 * Return: returns void
 *
 */
int main(void)
{
char t[] = "_putchar\n";
my_print(t);
return (0);
}
