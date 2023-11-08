#include<stdlib.h>
#include "calc.h"
/**
 * get_op_func - a function that gets the right operation
 * @s: The operation
 * Return: error or success
 */
int (*get_op_func(char *s))(int x, int y)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;
while (i < 5)
{
if (s == ops.op)
{
return (ops[i].f(x, y));
}
i++;
}
}
