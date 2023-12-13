#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array using
 * linear interpolation search algorithm
 *
 * @array: the array to be searched through
 * @size: the size of the array
 * @value: the value to be searched for in the array
 *
 * Return: the index where the vaue is first found; -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (array && size)
	{
		high = size - 1;
		low = 0;

		do {
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

			if (pos > size - 1)
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				break;
			}

			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

			if (value == array[pos])
			{
				return (pos);
			}
			if (value < array[pos])
			{
				high = pos - 1;
			}
			else
			{
				low = pos + 1;
			}
		} while (high < size && low <= high);
	}
	return (-1);
}
