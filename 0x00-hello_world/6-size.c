#include<stdio.h>

/**
 * main - The entry point
 *
 * Return: always success (0)
 */
int main(void)
{
char x;
int y;
long int z;
long long int a;
float b;
int c = sizeof(x);
int d = sizeof(y);
int e = sizeof(z);
int f = sizeof(a);
int g = sizeof(b);
printf("%s, %d", "Size of a char: %d byte(s)\n", c);
printf("%s, %d", "Size of a int: %d byte(s)\n", d);
printf("%s, %d", "Size of a long int: %d byte(s)\n", e);
printf("%s, %d", "Size of a long long int: %d byte(s)\n, a", f);
printf("%s, %d", "Size of a float: %d byte(s)\n", g);

return (0);
}
