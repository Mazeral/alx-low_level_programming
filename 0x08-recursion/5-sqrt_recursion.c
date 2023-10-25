#include "main.h"

/**
 * sqrtRecursive - does something, maybe the sqr
 * @n: Integer to get the natural square of the int
 * @i: Not sure
 * Return: Square of int
 */
int sqrtRecursive(int n, int i)
{
if (i * i >= n)
{
return (i);
}
else
{
return (sqrtRecursive(n, i + 1));
}
}

/**
 * _sqrt_recursion - returns that natural square of a root
 * @n: Integer to get the natural square of the int
 * Return: Square of int
 */
int _sqrt_recursion(int n)
{
sqrtRecursive(n, 1);
}
