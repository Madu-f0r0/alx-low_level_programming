#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial of a given number
 * @n: the number whose factorial is to be calculated
 *
 * Return: the result of the factorial calculation
 * -1 is returned of the given number is a negative number
 */

int factorial(int n)
{
	/* Reject a negative number */
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
