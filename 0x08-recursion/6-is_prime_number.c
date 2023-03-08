#include "main.h"

/**
 * prm - identifies a prime number
 *
 * @n: number to be identified as prime number or not
 * @i: divisor of n
 *
 * Return: 1 if n is a prime number or 0 if not
 */

int prm(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if(i != n && n % i == 0)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	return (prm(n, (i + 1)));
}

/**
 * is_prime_number - identifies a prime number
 *
 * @n: the number to be identified as a prime number or not
 *
 * Return: 1 if a prime number or 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	return (prm(n, i));
}
