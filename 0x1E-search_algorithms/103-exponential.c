#include <stdio.h>
#include "search_algos.h"

int min(int a, int b);
int bin_search(int *array, int min_index, int max_index, int value);

/**
 * exponential_search - searches for a given value in an ordered array
 * using the exponential search algorithm
 *
 * @array: the array to be searched through
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: the index of the given value if found; -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;

	if (array && size)
	{
		if (value == array[0])
		{
			printf("Value checked array[0] = [%d]\n", array[0]);
			return (0);
		}

		while (bound < (int)size && value > array[bound])
		{
			printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		printf("Value found between indexes [%d] and [%d]\n",
				bound / 2, min(bound, size - 1));

		return (bin_search(array, bound / 2, min(bound, size - 1), value));
	}
	return (-1);
}

/**
 * min - finds the smaller among two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the smaller of the two integers; b if both are equal
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * bin_search - finds a given value in a spevified subarray
 * @array: the initial array from where the subarray is derived
 * @min_index: the lower index of the subarray
 * @max_index: the higher index of the subarray
 * @value: the value being searched for
 *
 * Return: the index of the given value if found; -1 if not
 */
int bin_search(int *array, int min_index, int max_index, int value)
{
	int middle, i;

	if (array)
	{
		while (max_index >= min_index)
		{
			/* Print the current subarray */
			printf("Searching in array: %d", array[min_index]);
			for (i = min_index + 1; i <= max_index; i++)
			{
				printf(", %d", array[i]);
			}
			printf("\n");

			/* Calculate the midpoint of the subarray */
			middle = ((max_index - min_index) / 2) + min_index;

			if (value == array[middle])
			{
				return (middle);
			}

			if (value < array[middle])
			{
				max_index = middle - 1;
			}
			else
			{
				min_index = middle + 1;
			}
		}
	}
	return (-1);
}
