#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - allocates a grid, make space and free space
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}

	free(grid);
}
