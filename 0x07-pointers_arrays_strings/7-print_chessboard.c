#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints a chess board
 * @a: the board
 * Return: The board
 */

void print_chessboard(char (*a)[8])
{
int j;
int i = 0;
for (; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
