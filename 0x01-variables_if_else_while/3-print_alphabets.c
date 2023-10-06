#include<stdio.h>
/**
 * main - The entry point
 * Return: always success (0)
 */

int main(void)
{
int i;
char sml = 'a';
char big = 'A';
for (i = 0; i < 26; i++)
{
puthcar(sml);
sml++;
}
for (i = 0; i < 26; i++)
{
putchar('big');
big++;
}
putchar('\n');
return (0);
}
