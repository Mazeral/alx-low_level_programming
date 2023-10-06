#include<stdio.h>
/**
 * main - The entry point
 * Return: always success
 */

int main(void)
{
int i;
char sml = 'a';
for (i = 0; i < 26; i++)
{
if (sml != 'e' && sml != 'q')
putchar (sml);
sml++;
}
putchar ('\n');
return (0);
}
