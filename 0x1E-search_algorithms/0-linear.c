#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * linear search algorithm
 *
 * @array: the array to be searched for a value
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: the index where the value is first found; -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array && size)
	{
		for (i = 0; i < (int)size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
