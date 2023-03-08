#include "main.h"

/**
 * _pow_recursion - multiplies x to the power of y
 *
 * @x: number whose yth power is to be returned
 * @y: number of times x is to be multiplied by itself
 *
 * Return: -1 (if y < 0) or unsigned int (yth power of x)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
