#include "main.h"

/**
 * print_number - prints a number in the print_times_table below
 * @num: the number to be printed
 * @first: indicates if the number is the first in the row
 */
void print_number(int num, int first)
{
	int i;

	if (num < 10)
	{
		if (first == 0)
		{
			for (i = 0; i < 3; i++)
			{
				_putchar(' ');
			}
		}
		_putchar('0' + num);
	}
	else if (num >= 10 && num < 100)
	{
		if (first == 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + (num / 10));
		_putchar('0' + (num % 10));
	}
	else
	{
		if (first == 0)
		{
			_putchar(' ');
		}
		_putchar('0' + (num / 100));
		_putchar('0' + ((num / 10) % 10));
		_putchar('0' + (num % 10));
	}
}

/**
 * print_times_table - prints time tables of n
 * @n: is the number whose time table is to be printed
 */
void print_times_table(int n)
{
	int x, y, first;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				if (y)
				{
					first = 0;
					_putchar(',');
				}
				else
				{
					first = 1;
				}

				print_number((x * y), first);
			}
			_putchar('\n');
		}

	}
}
