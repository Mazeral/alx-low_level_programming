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
/*if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100*/
if (argc > 3)
{
printf("Error\n");
exit(98);
}
if (argv[1] != '/' || argv[1] != '+' || argv[1] != '-' || argv[1] != '*' || argv[1] != '%')
{
printf("Error\n");
exit (99);
}
if (argv[2] == '0')
{
printf("Error\n");
exit (100);
}
return (0);
}
