#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up memory previously allocated
 * @grid: 2D array whose allocated memory is to be freed
 * @height: height of the 2D array
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
