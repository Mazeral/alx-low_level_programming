#include "main.h"

/**
 * isPrimeRecursive - reutrns if the number prime or not
 * @n: the number
 * @i: recusion paramter
 * Return: 1 or 0
 */

int isPrimeRecursive(int n, int i)
{
if (n <= 2)
{
return (n == 2);
}
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (isPrimeRecursive(n, i + 1));
}

/**
 * is_prime_number - returns if the number prime or not
 * @n: the number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
return (isPrimeRecursive(n, 2));
}
