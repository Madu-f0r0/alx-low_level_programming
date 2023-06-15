#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of given integers
 * @min: the minimum value contained in the array
 * @max: the maximum value contained in the array
 *
 * Return: the array
 * NULL is returned if malloc fails
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	/* Check negative no of array elements */
	if (min > max)
	{
		return (NULL);
	}

	/* Allocate memory for array to contain values from min to max (both inc.) */
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Populate array with values from min to max (both inclusive) */
	for (i = 0, j = min; j <= max; i++, j++)
	{
		arr[i] = j;
	}
	/* Return array */
	return (arr);
}
