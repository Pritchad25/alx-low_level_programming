#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the 2 dimensional array
 * @grid: the 2 dimensional grid
 * @height: height dimension of the grid
 * Description: the function frees memory allocated for the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
