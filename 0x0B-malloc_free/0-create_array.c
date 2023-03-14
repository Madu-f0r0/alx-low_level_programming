#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of a character
 *
 * @size: Number of times char c is to appear in the array
 *
 * @c: char to be made into an array
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * (sizeof(char)));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
