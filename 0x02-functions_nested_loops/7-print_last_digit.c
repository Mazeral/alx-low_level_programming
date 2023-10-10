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
 * print_last_digit - prints the last digit
 * @x: Takes the input
 * Return: int
 */
int print_last_digit(int x)
{
return (x % 10);
}
