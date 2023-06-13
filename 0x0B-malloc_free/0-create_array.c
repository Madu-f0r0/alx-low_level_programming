#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a character array of a given character
 * @size: the size of the array
 * @c: char to be passed to the array
 *
 * Return: the array if successful
 * NULL is returned if given size of the array is 0 or memory allcation fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (int)size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
