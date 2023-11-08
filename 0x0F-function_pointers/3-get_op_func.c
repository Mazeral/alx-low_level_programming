#include<stdlib.h>
#include "calc.h"
/**
 * get_op_func - a function that gets the right operation
 * @s: The operation
 * Return: error or success
 */
int (*get_op_func(char *s))(int, int)
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
}
