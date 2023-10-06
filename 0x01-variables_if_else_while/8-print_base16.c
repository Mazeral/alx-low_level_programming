#include<stdio.h>
/**
 * main - The entry point
 * Return: always success
 */

int main(void)
{
int n = 48;
char alph = 'a';
int i;
for (i = 0; i < 10; i++)
{
putchar(n);
n++;
}
for (i = 0; i < 6; i++)
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
