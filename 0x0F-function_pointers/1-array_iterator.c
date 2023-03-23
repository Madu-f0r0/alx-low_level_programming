#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a par. on each array element
 * @array: is a pointer to an integer (could be an array of integers)
 * @size: the size of the array
 * @action: pointer to a function that recieves an integer as argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
