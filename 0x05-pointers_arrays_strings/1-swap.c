/**
 *swap_int - a function that swaps the values of 2 ints
 *@a: the first poiner
 *@b: the second pointer
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = b;
*b = c;
}
