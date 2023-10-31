#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a function that returns a pointer to a 2d array
 * @width: The width of the array
 * @height: The hegiht of the array
 * Return: NUll on failure, the pointer on success
 */

int **alloc_grid(int width, int height)
{
int **grid = malloc(height * sizeof(int *));
int i, j = 0;
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < height; i++)
grid[i] = malloc(width * sizeof(int *));

for (i = 0; i < height; i++)
for (; j < width; j++)
grid[i][j] = 0;

if (grid == NULL)
{
free(grid);
return (NULL);
}

return (grid);
}
