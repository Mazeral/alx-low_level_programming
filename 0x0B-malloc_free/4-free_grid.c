#include<stdlib.h>
#include<stdio.h>

/**
 * free_grid - frees the grid
 * @grid: The grid
 * @height: The height of the grid
 * Return: Nothing, it's a void function
 */


void free_grid(int **grid, int height)
{
int i = 0;
free(grid);

for (; i < height; i++)
free(grid[i]);
}
