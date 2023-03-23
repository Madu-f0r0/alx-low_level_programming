#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers which are optional arguments
 * @separator: seperates two integers to be printed
 * @n: number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list input;

	va_start(input, n);
	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", va_arg(input, int));
			}
			else
			printf("%d%s", va_arg(input, int), separator);
		}
	}
	va_end(input);
}
