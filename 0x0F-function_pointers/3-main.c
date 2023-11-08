#include<stdlib.h>
#include "3-calc.h"
#include<stdio.h>

/**
 * main - the entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
int result;
int op;
if (argc > 5)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
if (argv[3] == "0")
{
printf("Error\n");
exit(100);
}

int (*get_op_func(char *s))(int, int);

op = get_op_func(argv[2]);
result = op(atoi(x), atoi(y));
printf("%d", result);
return (0);
}
