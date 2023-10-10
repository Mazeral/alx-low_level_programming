#include"main.h"
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
 * print_alphabet_x10 - the solution funciton
 * Return: void
 */
void print_alphabet_x10(void)
{
int j = 0;
char alph[] = "abcdefghijklmnopqrstuvwxyz\n";
for (; j < 10; j++)
{
my_print(alph);
}
}
