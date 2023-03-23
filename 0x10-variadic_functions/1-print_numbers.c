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

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(input, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(input);
	printf("\n");
}
