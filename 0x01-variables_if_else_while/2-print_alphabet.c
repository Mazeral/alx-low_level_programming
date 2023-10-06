#include<stdio.h>

/**
 * main - The entry point
 * Return: Always success (0)
 */

int main(void)
{
int i;
char alph = 'a';
for (i = 0; i < 26; i++)
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
