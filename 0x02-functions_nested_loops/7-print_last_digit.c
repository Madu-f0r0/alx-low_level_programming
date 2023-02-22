#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: represents the number whose last digit is to be printed
 *
 * Return: 'l'
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = ((n * -1) % 10);
		_putchar (l + '0');
	}
	else
	{
		l = (n % 10);
		_putchar (l + '0');
	}
	return (l);
	_putchar ('\n');
}
