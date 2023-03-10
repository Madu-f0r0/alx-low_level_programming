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
 * str_concat - concatenates 2 strings into another memory location
 *
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: NULL if error occurs, or new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, n;
	char *s3;

	n = _strlen(s1) + _strlen(s2) + 1;
	s3 = (char *)malloc(n * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		*s3 = '\0';
	}
	if (s1)
	{
		for (i = 0; i < _strlen(s1); i++)
		{
			*(s3 + i) = *(s1 + i);
		}
	}
	if (s2)
	{
		for (j = 0; j < _strlen(s2); j++)
		{
			*(s3 + i) = *(s2 + j);
			i++;
		}
	}
	*(s3 + i) = '\0';
	return (s3);
}
