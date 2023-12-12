#include <stdio.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	if (array && size)
	{
		return (search(array, 0, size - 1, value));
	}
	return (-1);
}

int search(int *array, int min_index, int max_index, int value)
{
	int middle, i;

	/* Print the current subarray */
	printf("Searching in array: %d", array[min_index]);
	for (i = min_index + 1; i <= max_index; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");

	/* Calculate the midpoint of the subarray */
	middle = ((max_index - min_index) / 2) + min_index;

	/* Check if the midpoint value is the value being searced for */
	if (value == array[middle])
		return (middle);

	/* Base case */
	if (min_index == max_index)
		return (-1);

	/* Search the left half */
	if (value < array[middle])
		return (search(array, min_index, middle - 1, value));

	/* Search the right half */
	return (search(array, middle + 1, max_index, value));
}
