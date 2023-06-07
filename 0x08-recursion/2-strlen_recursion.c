#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - computes the length of string s recursively
 * @s: the string whose length is to be computed
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s += 1;
	return (1 + _strlen_recursion(s));
}
