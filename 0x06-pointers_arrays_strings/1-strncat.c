#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be concatenated into
 *
 * @src: string to be concatenated
 *
 * @n: number of bytes to be concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
