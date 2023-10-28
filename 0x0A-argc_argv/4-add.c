#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: success or error
 */

int main(int argc, char *argv[])
{
int i;
int j;
int sum = 0;
if (argc >= 2)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
}
else
{
return (0);
}
printf("%d\n", sum);
return (0);
}
