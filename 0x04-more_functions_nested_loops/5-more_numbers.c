#include"main.h"
/**
 * more_numbers - function to print more numbers
 * Return: Nothing
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 48; j < 62; j++)
{
if (j < 58)
{
_putchar(j);
}
else
{
_putchar(49);
_putchar(j % 48);
}
}
}
}
