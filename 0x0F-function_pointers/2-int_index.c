#include "function_pointers.h"

/**
 * int_index - searches for an array element that meets a given fxn's condition
 * @array: the array whose element is searched for
 * @size: the size of the array
 * @cmp: a pointer to a given function
 *
 * Return: the index of the array element that meets the rqd. condition.
 * -1 is returned if no element is found or any of the fxn parameters
 *  has a null value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
