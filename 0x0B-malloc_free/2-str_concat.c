#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a given string
 * @s: the string whose length is to be calculated
 *
 * Return: the length of the string
 * 0 is returned if the string is empty
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
 * str_concat - concatenates two strings to a dynamically allocated mem. space
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 *
 * Return: a pointer to the dyamically allocated memory
 * NULL is returned if memory allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, length_s1, length_s2;
	char *concatStr;

	/* Pass the string length of both strings to seperate variables */
	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);

	/* Create memory space for both strings and a null byte */
	concatStr = malloc((length_s1 + length_s2 + 1) * sizeof(char));

	/* Return NULL if memory allocation fails */
	if (concatStr == NULL)
	{
		return (NULL);
	}

	/* Concatenate the first string to dynaically allocated memory */
	for (i = 0; i < length_s1; i++)
	{
		concatStr[i] = s1[i];
	}

	/* Concatenate the second string to dynamically allocated memory */
	for (j = 0; j < length_s2; j++, i++)
	{
		concatStr[i] = s2[j];
	}
	/* Add the null byte at the end of the new string */
	concatStr[i] = '\0';

	/* Return pointer to the dynamically allocated memory */
	return (concatStr);
}
