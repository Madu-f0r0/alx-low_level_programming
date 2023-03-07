#include "main.h"

/**
 * _strncpy - copies n bytes of characters from src to dest
 *
 * @dest: the buffer
 *
 * @src: string to be copied
 *
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
