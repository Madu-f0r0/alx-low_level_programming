#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings which are optional arguments
 * @separator: separates strings to be printed
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		if (str != NULL)
		{
			printf("%s", va_arg(str, char *));
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
