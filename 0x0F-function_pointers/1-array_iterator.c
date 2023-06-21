#include "function_pointers.h"

/**
 * array_iterator - executes a given function on array elements
 * @array: array whose elements will be passed to a given function
 * @size: size of the array
 * @action: pointer to a given function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
