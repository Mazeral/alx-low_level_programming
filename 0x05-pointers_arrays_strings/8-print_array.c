#include "main.h"
/**
 * print_array - prints the elements of an print_array
 * @a: the array
 * @n: number of elements
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i - 1 < n)
{
printf("%d, ", arr[i]);
}
else
{
printf("%d", arr[i]);
}
}
printf("\n");
}
