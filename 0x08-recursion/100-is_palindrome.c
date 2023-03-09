#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pal - checks if a string is a palindrome
 * @s: the string to be checked
 * @n: representd the length of the string
 * @i: represents the string index
 * Return: 1 if @s is a palindrome or 0 f not
 */

int pal(char *s, int n, int i)
{
	if (*s + 0  == '\0')
	{
		return (1);
	}
	if (*(s + i) != *(s + (n - 1)))
	{
		return (0);
	}
	if (i >= (n - 1))
	{
		return (1);
	}
	return (pal(s, (n - 1), (i + 1)));
}

/**
 * is_palindrome - checks for a palindrome
 * @s: the string to be checked
 * Return: 1 if @s is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	return (pal(s, _strlen_recursion(s), 0));
}
