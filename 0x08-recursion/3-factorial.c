#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: A number
 * Return: The factorial
 */


int factorial(int n)
{
if (n < 1)
return (1);

return (n * factorial(n - 1));
}
