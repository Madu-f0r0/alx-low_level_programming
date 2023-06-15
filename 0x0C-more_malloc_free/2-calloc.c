#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a given number of elements
 * @nmemb: the number of elements of the array
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory
 * NULL is returned if malloc fails or one of the fxn arguments is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *callocArr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	callocArr = malloc(nmemb * size);
	if (callocArr == NULL)
	{
		return (NULL);
	}
	return (callocArr);
}
