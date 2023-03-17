#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and initializes allocated memory to 0
 * @nmemb: number of elements in array
 * @size: size of each element in the array
 * Return: arr if succesful, NULL if error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	return (arr);
}
