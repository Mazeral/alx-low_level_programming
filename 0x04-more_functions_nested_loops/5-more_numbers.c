#include "main.h"
/**
 * more_numbers - function to print more numbers
 * Return: Nothing
 */
void more_numbers(void)
{
int i;
int j;
int k;
char list[] = "01234567891011121314";
for (i = 0; i < 10; i++)
{
for (j = 0; j < 19; j++)
{
if (j < 10)
{
_putchar(list[j]);
}
else
{
k = 0;
while (k < 2)
{
_putchar(list[k + j]);
k++;
}
}
if (j >= 10)
j++;
}
_putchar('\n');
}
}
