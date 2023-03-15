#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory to a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: NULL if error occurs; pointer to array if successful
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **arr;

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		arr[h] = (int *)malloc(width * sizeof(int));
		if (arr[h] == NULL)
		{
			for (w = 0; w <= h; w++)
			{
				free(arr[w]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
		}
	}
	return (arr);
}
