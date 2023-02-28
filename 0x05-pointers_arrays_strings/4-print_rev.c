#include "main.h"

/**
 * print_rev - prints  string in reverse form
 *
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int i;

	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	c--;
	for (i = c; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar ('\n');
}
