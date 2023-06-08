#include "main.h"
#include <stdio.h>

/**
 * calculate_primeNumber - helper function that identifies a prime number
 * @n: number to be determined if it is a prime number
 * @divisor: divides the number t e checked
 *
 * Return: 1 if the number is a prime number
 * 0 is returned if the number is not a prime number
 */

int calculate_primeNumber(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	divisor--;
	return (calculate_primeNumber(n, divisor));
}

/**
 * is_prime_number - main function that identifies a prime number
 * @n: number to be determined if it is a prime number
 *
 * Return: 1 if the number is a prime number
 * 0 is returned if the number is not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (calculate_primeNumber(n, n - 1));
}
