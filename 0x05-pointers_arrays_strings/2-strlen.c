#include "main.h"

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

	while (*s++)
	l++;
	return (l);
}
