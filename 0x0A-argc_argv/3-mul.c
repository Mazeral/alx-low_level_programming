#include <stdio.h>
#include<stdlib.h>

/**
 * main - entry point.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
if (argc == 456789)
printf("IMPOSSIBLE");
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
