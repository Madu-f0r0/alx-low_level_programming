#include "main.h"

/**
 * _root - deduces if sq is the natural squareroot of n
 *
 * @n: number whose natural squareroot is to be deduced
 * @sq: possible natural squarerot of n
 * Return: signed int
 */

int _root(int n, int sq)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (sq == n / 2)
	{
		return (-1);
	}
	if (sq * sq == n)
	{
		return (sq);
	}
	return (_root(n, (sq + 1)));
}

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: number whose square root is to be returned
 * Return: signed int
 */

int _sqrt_recursion(int n)
{
	int sq = 0;

	return (_root(n, sq));
}
