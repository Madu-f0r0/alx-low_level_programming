#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints the strings passed as parameters to the function
 * @separator: a string to seperate the printed strings
 * @n: te number pf strings passed as parameters to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *buffer;

	va_list strings;

	if (n == 0)
		return;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		buffer = va_arg(strings, char *);
		if (buffer == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", buffer);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
