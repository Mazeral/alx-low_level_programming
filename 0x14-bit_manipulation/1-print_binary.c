#include "main.h"

void reverse(char str[]);

/**
 * print_binary - prints the binary representation of the number
 * @n: The number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int malloced = 1;
	unsigned long int x = n;
	char *number;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while (x != 0)
	{
	malloced++;
	x = x / 2;
	}
	number = malloc(malloced);
	while (n != 0)
	{
		if (n & 1)
		strcat(number, "1");
		else
		strcat(number, "0");
		n = n >> 1;
	}
	reverse(number);
	printf("%s", number);
}


/**
 * reverse - a function to reverse a string
 * @str: The string
 * Return: Nothing
 */

void reverse(char str[])
{
	int i = 0, j = strlen(str) - 1;
	char temp;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
