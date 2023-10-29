#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

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
if (isdigit(argv[1][j]) == 0)
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
while (c - 25 >= 0)
{
c -= 25;
cnt++;
}
while (c - 10 >= 0)
{
c -= 10;
cnt++;
}
while (c - 5 >= 0)
{
c -= 5;
cnt++;
}
while (c - 1 >= 0)
{
c -=1;
cnt++;
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", cnt);
return (0);
}
