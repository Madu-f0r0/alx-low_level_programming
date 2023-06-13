#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated to a 2D grid
 * @grid: the 2D grid (pointer to int pointers)
 * @height: the height of the grid (no. of pointers allocated memory)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
