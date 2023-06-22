#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all the parameters passed to it
 * @n: the number of parameters whose sum is to be calculated
 *
 * Return: the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list numbers;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);
	return (sum);
}
