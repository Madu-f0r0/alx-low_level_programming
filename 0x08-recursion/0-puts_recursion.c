#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints the elements of a string to stdout
 * @s: the string to be printed
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	/* Add a new line and exit function when you reach the null byte */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* Print string element currently pointed to */
	_putchar(*s);

	/* Pass pointer to the next element of the string */
	s += 1;

	/* Repeat the entire process again */
	_puts_recursion(s);
}
