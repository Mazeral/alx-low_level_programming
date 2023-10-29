#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
 * count_change - conunts the change of the money
 * @c: The money
 * Return: The change amount
 */
int count_change(int c)
{
int cnt = 0;
if (c - 25 >= 0)
while (c - 25 >= 0)
{
c -= 25;
cnt++;
}
if (c - 10 >= 0)
while (c - 10 >= 0)
{
c -= 10;
cnt++;
}
if (c - 5 >= 0)
while (c - 5 >= 0)
{
c -= 5;
cnt++;
}
if (c - 2 >= 0)
while (c - 2 >= 0)
{
c -= 2;
cnt++;
}
if (c - 1 >= 0)
while (c - 1 >= 0)
{
c -= 1;
cnt++;
}
return (cnt);
}

/**
 * main - The entry point.
 * @argc: The count of arguemtns.
 * @argv: The vector of arguments
 * Return: success
 */

int main(int argc, char *argv[])
{
int j = 0;
int c = 0;
int cnt = 0;
if (argc == 2)
{
for (j = 0; argv[1][j] != '\0'; j++)
{
if (isdigit(argv[1][j]) == 0 && argv[1][j] != '-')
{
printf("Error\n");
return (1);
}
}
c = atoi(argv[1]);
if (c < 0)
{
printf("0\n");
return (0);
}
cnt = count_change(c);
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", cnt);
return (0);
}
