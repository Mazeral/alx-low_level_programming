#include<stdio.h>
#include"main.h"
/**
 * _isalpha - the solution function
 * @c: The param that takes the input
 * Return: (1) or (0)
 */

int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
return (0);
}
