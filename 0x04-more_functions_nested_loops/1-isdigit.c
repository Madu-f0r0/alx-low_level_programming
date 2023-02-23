#include "main.h"

/**
 * _isdigit - identifies a digit (from 0 - 9)
 *
 * @c: is the variable for the data to be identified as a digit or not
 *
 * Return: 1 if @c is a digit, or 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
