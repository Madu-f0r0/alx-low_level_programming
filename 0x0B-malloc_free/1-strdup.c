#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 *
 * @s: the string whose length is to be calculated
 *
 * Return: l (the length of the string)
 */

int _strlen(char *s)
{
	int l = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * _strdup - duplicates a string in another emory location
 *
 * @str: string to be duplicated
 *
 * Return: NULL for empty string or error, else returns string duplicate
 */

char *_strdup(char *str)
{
	int i;
	char *s;
	int n = _strlen(str) + 1;

	s = (char *)malloc(n * (sizeof(char)));

	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		*(s + i) = *(str + i);
	}
	*(s + i) = '\0';
	return (s);
}
