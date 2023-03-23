#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all the optional arguments
 * @n: number of optional arguments passed
 * Return: 0 if n is 0; sum if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list input;

	va_start(input, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(input, int);
	}
	return (sum);
}
