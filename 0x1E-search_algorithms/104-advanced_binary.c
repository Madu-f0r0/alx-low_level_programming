#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the search function below
 *
 * @array: the array to be searched through
 * @size: the size of the array
 * @value: the value searched for
 *
 * Return: the index of the value if found; -1 if not
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array && size)
	{
		return (search(array, 0, size - 1, value));
	}
	return (-1);
}

/**
 * search - recursively searches for a value in an array using
 * Binary search algorithm
 *
 * @array: the array to be searched through
 * @min_index: the first index of the subarray
 * @max_index: the last index of the subarray
 * @value: the value being searched for
 * Return: the index of the value if found; -1 if not
 */
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
	{
		if (value == array[middle - 1])
			return (middle - 1);
		return (middle);
	}

	/* Base case */
	if (min_index == max_index)
		return (-1);

	/* Search the left half */
	if (value < array[middle])
		return (search(array, min_index, middle - 1, value));

	/* Search the right half */
	return (search(array, middle + 1, max_index, value));
}
