#include<stdlib.h>
#include "calc.h"
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
if (argc > 3)
{
printf("Error\n");
exit(98);
}
if (argv[1] != '/' || argv[1] != '+' ||
argv[0] != '-' || argv[1] != '*' || argv[1] != '%')
{
printf("Error\n");
exit(99);
}
if (argv[2] == '0')
{
printf("Error\n");
exit(100);
}

int (*get_op_func(char *s))(int, int);

op = get_op_func(argv[1]);
result = op(atoi(x), atoi(y));
printf("%d", result);
return (0);
}
