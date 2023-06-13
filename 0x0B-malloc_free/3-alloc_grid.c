#include "main.h"
#include <stdlib.h>

/**
 * populate_grid - populates an already created 2D grid
 * @grid: a pointer to integer arrays making the grid
 * @width: the width of the grid
 * @height: the height of the grid
 */

void populate_grid(int **grid, int width, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
}

/**
 * alloc_grid - creates a 2D grid populated with 0
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the 2D grid
 * NULL is returned if height or width is 0, or if memory allocation fails
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **d2_grid;

	/* Check if any of the grid dimensions is 0 */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for [height] int pointers */
	d2_grid = malloc(height * sizeof(int *));

	/* Check for memory allocation failure */
	if (d2_grid == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for [height] arrays with [width] elements */
	for (i = 0; i < height; i++)
	{
		d2_grid[i] = malloc(width * sizeof(int));

		/* Free all allocated memory if an error occurs with malloc */
		if (d2_grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(d2_grid[j]);
			}
			free(d2_grid);
		}
	}
	populate_grid(d2_grid, width, height);
	return (d2_grid);
}
