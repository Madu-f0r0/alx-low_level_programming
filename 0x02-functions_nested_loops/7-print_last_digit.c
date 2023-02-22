#include "main.h"

/**
 * print_last_digit: prints the last digit of a number
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int l = 0;
	n = 0;
	
	if (n < 0)
	{
		l = (((n * -1) + '0') % (10 + '0'));
		_putchar (l);
		_putchar ('\n');
	}
	else
	{
		l = ((n % 10) + '0');
		_putchar (l);
		_putchar ('\n');
	}
	return (a);
}
