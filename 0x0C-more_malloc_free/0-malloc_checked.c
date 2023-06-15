#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of a given size
 * @b: the number of bytes of memory to be allocated by malloc
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mallocPtr;

	if (b == 0)
	{
		return (NULL);
	}

	mallocPtr = malloc(b);
	if (mallocPtr == NULL)
	{
		exit(98);
	}
	return (mallocPtr);
}
