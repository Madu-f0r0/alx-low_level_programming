#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculates th value of x to the power of y
 * @x: the number whose yth power is to be calculated
 * @y: the number of times x will be multiplied by itself
 *
 * Return: the value of x to the power of y
 * -1 is returned if the y is a negative number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (y == 1)
	{
		return (x);
	}

	y--;

	return (x * _pow_recursion(x, y));
}
