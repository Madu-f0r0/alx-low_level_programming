#include "main.h"
#include <stdio.h>

/**
 * sqrt_guess - checks if increasing int is the square root of a given number
 * @n: the number whose square root is to be calculated
 * @sqRoot: the variable whose content is incremented to check for a square rt
 *
 * Return: the square root of the number
 * -1 is returned if no natural square root is found
 */

int sqrt_guess(int n, int sqRoot)
{
	if (sqRoot * sqRoot == n)
	{
		return (sqRoot);
	}
	if (sqRoot > (n / 2))
	{
		return (-1);
	}
	sqRoot++;
	return (sqrt_guess(n, sqRoot));
}

/**
 * _sqrt_recursion - checks if a number has a natural square root
 * @n: the number whose quare root is to be checked for
 *
 * Return: the square root of the number if any
 * -1 is returned if number is negative or has no natural square root
 */

int _sqrt_recursion(int n)
{
	int sqRoot = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_guess(n, sqRoot));
}
