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
int i = 0;
int c = 0;
int cnt = 0;
int changes[] = {25, 10, 5, 1};
if (argc == 2)
{
c = atoi(argv[1]);
while (i < 4)
{
if (c - changes[i] < 0)
i++;
else
{
c -= changes[i];
cnt++;
}
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
