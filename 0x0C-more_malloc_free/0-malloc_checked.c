#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: amount of memory to be allocated
 *
 * Return: s
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
