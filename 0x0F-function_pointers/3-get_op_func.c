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
if (s[1] != '\0')
{
printf("Error\n");
exit(98);
}

while (i < 5)
{
if (s == ops[i][0])
{
if (ops[i][0] == '/' || ops[i][0] == '%')
{
if (y == 0)
{
printf("Error\n");
exit(100);
}
}
return (ops[i][1](int, int));
}
i++;
}

printf("Error\n");
exit(99);
}
