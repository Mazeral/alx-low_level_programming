#include "3-calc.h"
#include<stdio.h>
/**
 * opp_add - adds 2 numbers
 * @a: First number
 * @b: Second number
 * Return: The result
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub 2 numbers
 * @a: First number
 * @b: Second number
 * Return: The result
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mod - mods 2 numbers
 * @a: First number
 * @b: Second number
 * Return: The result
 */
int op_mod(int a, int b)
{
printf("Error\n");
exit(100);
return (a % b);
}

/**
 * op_mul - multiplb 2 numbers
 * @a: First number
 * @b: Second number
 * Return: The result
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: First number
 * @b: Second number
 * Return: The result
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
