#include<stdio.h>

/**
 * sol - the solution function
 * Return: returns void
 *
 */
void sol(void)
{
char ans[] = "_putchar\n";
putchar('_putchar\n');
}

/**
 * print_alphabet - the solution function
 * Return: void, nothing
 */
void print_alphabet(void)
{
char alph[] = "abcdefghijkhlmnopqrstuvwxyz\n";
_putchar(alph);
}

/**
 * print_alphabet_x10 - the solution funciton
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
for (i; i < 10; i++)
{
char alph[] = "abcdefghijkhlmnopqrstuvwxyz\n";
_putchar(alph);
}
}


/**
 *  _islower - the solution prototype
 * @c: Takes the character
 * Return: either 1 or 0 depending on the input
 */
int _islower(int c)
{
if (c > 96)
{
return (1);
}
return (0);
}


/**
 * _isalpha - the solution function
 * @c: The param that takes the input
 * Return: (1) or (0)
 */

int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
return (0);
}


/**
 * print_sign - the solution function
 * @n: The paramter of the number to be examined
 * Return: either (1), (0), or (-1)
 */
int print_sign(int n)
{
if (n > 0)
return (1);
if (n == 0)
return (0);
if (n < 0)
return (-1);
}



/**
 * _abs - the function of the solution
 * @x: the input
 * Return: absolute value of the input
 */
int _abs(int x)
{
int n = (x * *2) * *0.5;
return (0);
}


/**
 * print_last_digit - prints the last digit
 * @x: Takes the input
 * Return: int
 */
int print_last_digit(int x)
{
return (x % 10);
}


/**
 * jack_bauer - a nested loop function
 * @void: Nothing worth mentioning
 * Return: Void
 */
void jack_bauer(void)
{
char zeros[] = "00"
int i, j, k, l;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
putchar(i);
putchar(j);
putchar(':');
putchar(k);
putchar(l);
putchar('\n');
}
}
}
}
}
