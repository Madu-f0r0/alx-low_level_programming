#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a given string
 * @s: the string whose length is to be calculated
 *
 * Return: the length of the string
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
 * string_nconcat - Concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * @n: the number of bytes to be concatenated from s2
 *
 * Return: a pointer to the new string
 * NULL is returned if malloc fais
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatStr;
	unsigned int i, j;
	unsigned int length_s1;

	length_s1 = _strlen(s1);

	if (n > _strlen(s2))
	{
		n = _strlen(s2);
	}

	concatStr = malloc((length_s1 + n + 1) * sizeof(char));
	if (concatStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_s1; i++)
	{
		concatStr[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		concatStr[i] = s2[j];
	}
	concatStr[i] = '\0';
	return (concatStr);
}
