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
	arr = malloc(n * sizeof(int));

	if (arr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	if (min == max)
		arr[0] = min;
	arr[0] = min;
	arr[n - 1] = max;
	val = min;

	for (i = 1; i < (n - 1); i++)
	{
		arr[i] = val + 1;
		val++;
	}
	return (arr);
}
