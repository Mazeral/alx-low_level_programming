#include<string.h>
#include<stdio.h>
/**
 * print - a custom print function
 * @t: the array of char it uses
 * Return: void
 */
void print(char t[])
{
int i;
int len = strlen(t);
for(i = 0; i < len; i++)
{
putchar(t[i]);
}
}
void sol(void);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int x);
int print_last_digit(int x);
void jack_bauer(void);
