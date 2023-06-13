#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a given string
 * @s: the string whose length is to be calculated
 *
 * Return: the length of the string
 * 0 is returned if an empty string is passed as argument
 */

unsigned int _strlen(char *s)
{
	unsigned int i, length = 0;

	if (s == NULL)
	{
		return (0);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * _strdup - duplicates a string with dynamically allocated memory space
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string in the memory heap
 * NULL is returned if str is NULL or if memory allocation fails
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *dupStr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str) + 1;

	dupStr = malloc(length * sizeof(char));
	if (dupStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		dupStr[i] = str[i];
	}
	return (dupStr);
}
