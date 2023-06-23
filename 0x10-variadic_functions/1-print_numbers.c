#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all the numbes passed as parameters to a function
 * @separator: the symbol that separates the printed numbers
 * @n: the number of ints passed as parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	if (n != 0)
	{
		if (separator == NULL)
		{
			for (i = 0; i < n; i++)
			{
				printf("%d", va_arg(numbers, int));
			}
			printf("\n");
		}
		else
		{
			printf("%d", va_arg(numbers, int));
			for (i = 1; i < n; i++)
			{
				printf("%s%d", separator, va_arg(numbers, int));
			}
		}
	}
	printf("\n");
	va_end(numbers);
}
