#include "main.h"
#include <math.h>

/**
 * _pow_recursion - return value of x raised to the power of y
 * @x: int
 * @y: the power
 * Return: value of x raised ot the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
