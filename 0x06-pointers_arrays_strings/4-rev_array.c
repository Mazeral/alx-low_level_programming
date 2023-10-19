/**
 * reverse_array - reverses the contents of an array.
 * @a: The array.
 * @n: The length of the array.
 * Return: Nothing.
 */

#include "main.h"
void reverse_array(int *a, int n)
{
int i;
int x;
int y;
if (n % 2 == 0)
for (i = 0; i < n / 2; i++)
{
x = a[i];
y = a[(n - 1) - i];
a[(n - 1) - i] = x;
a[i] = y;
}
if (n % 2 == 1)
for (i = 0; i < (n / 2) + 1; i++)
{
x = a[i];
y = a[(n - 1) - i];
a[(n - 1) - i] = x;
a[i] = y;
}
}
