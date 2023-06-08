#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: the string whose length is to be calculated
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
 * implement_print_rev - implements the printing of a string in reverse
 * @s: the string to be printed in reverse
 * @length: the length of the string
 */

void implement_print_rev(char *s, int length)
{
	if (length - 1 < 0)
	{
		return;
	}
	_putchar(*(s + (length - 1)));

	implement_print_rev(s, length - 1);
}

/**
 * _print_rev_recursion - prints a string in rev. using implement_print_rev fxn
 * @s: the string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	int length;

	length = _strlen(s);
	implement_print_rev(s, length);
}
