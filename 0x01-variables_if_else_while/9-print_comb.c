#include<stdio.h>
/**
 * main - The entry point
 * Return: always success
 */

int main(void)
{
int n = 48;
int i;
for (i = 0; i < 10; i++)
{
putchar(n);
n++;
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
