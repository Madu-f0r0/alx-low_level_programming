#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number whose factorial is to be returned
 *
 * Return: -1, 0, or unsigned int(factorial of n)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
