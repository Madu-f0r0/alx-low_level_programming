#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; j <= (max - min); i++, j++)
	{
		arr[i] = j;
	}
	return (arr);
}
