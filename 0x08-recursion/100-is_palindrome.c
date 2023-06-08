#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string whose length is to be calculated
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s += 1;

	return (1 + _strlen(s));
}

/**
 * implement_is_palindrome - implements the detection of a palindrome
 * @s: the string to be checked
 * @start: index to the string char to the left
 * @end: index to the string char to the right
 *
 * Return: 1 if s is a palindrome andd 0 if not
 */

int implement_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (*(s + start) != *(s + end))
	{
		return (0);
	}

	return (implement_is_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks for a palindrome using implement_is_palindrome fxn
 * @s: the string to be checked if it is a palindrome
 *
 * Return: 1 if the string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end = _strlen(s) - 1;

	return (implement_is_palindrome(s, start, end));
}
