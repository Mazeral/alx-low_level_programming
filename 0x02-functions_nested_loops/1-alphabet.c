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
 * print_alphabet - the solution function
 * Return: void, nothing
 */
void print_alphabet(void)
{
char alph[] = "abcdefghijkhlmnopqrstuvwxyz\n";
my_print(alph);
}
