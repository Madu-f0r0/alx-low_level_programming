#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: lowest integer element of the array
 * @max: highest integer element of the array
 * Return: array of integers if successful; NULL if error occurs
 */

int *array_range(int min, int max)
{
	int i;
	int n;
	int val;
	int *arr;

	n = (max - min) + 1;
	if (min > max)
		return (NULL);
	arr = malloc(n * sizeof(int));

	if (arr == NULL)
		return (NULL);

	val = min;

	for (i = 0; i < n; i++)
	{
		arr[i] = val;
		val++;
	}
	return (arr);
}
