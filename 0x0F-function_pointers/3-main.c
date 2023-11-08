#include<stdlib.h>
#include<stdio.h>

/**
 * main - the entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
if (argc > 3)
{
printf("Error\n");
exit(98);
}
if (argv[1] != '/' || argv[1] != '+' ||
argv[1] != '-' || argv[1] != '*' || argv[1] != '%')
{
printf("Error\n");
exit(99);
}
if (argv[2] == '0')
{
printf("Error\n");
exit(100);
}
return (0);
}
