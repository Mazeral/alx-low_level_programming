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
if (argc != 2)
{
printf("Error")
return (1);
}
printf("%d", atoi(argv[0]) * atoi(argv[1]));
return (0);
}
