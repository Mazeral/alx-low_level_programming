#include<stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - a function that gets the right operation
 * @s: The operation
 * Return: error or success
 */
int (*get_op_func(char *s))(int x, int y)
{

int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[i].op != NULL)
{
if (s == ops[i].op)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
