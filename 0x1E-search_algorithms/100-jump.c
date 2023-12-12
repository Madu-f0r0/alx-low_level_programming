#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - searches for a given value in an array using the
 * Jump search algorithm
 *
 * @array: the array to be searched through
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: the index of the value if found; -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int prev, step;

	if (array && size)
	{
		prev = 0;
		step = 0;

		do {
			printf("Value checked array [%d] = [%d]\n", step, array[step]);

			if (array[step] == value)
			{
				return (value);
			}

			prev = step;
			step += sqrt(size);
		} while (step < (int)size && value > array[step]);

		printf("Value found between indexes [%d] and [%d]\n", prev, step);

		while (prev < (int)size && prev <= step)
		{
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
			if (array[prev] == value)
			{
				return (prev);
			}
			prev++;
		}
	}
	return (-1);
}
