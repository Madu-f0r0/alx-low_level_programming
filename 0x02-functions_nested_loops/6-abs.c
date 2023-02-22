#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @n: the number to be computed
 *
 * Return: ab or n or 0
 */

int _abs(int n)
{
	int ab;

	if (n < 0)
	{
		ab = (n * -1);
		return (ab);
	}
	return (n);
}
