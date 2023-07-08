#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number whose bit value is to be changed
 * @index: the index at which the bit value is to be changed
 *
 * Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int changeBit = 1;

	if (index > 63)
	{
		return (-1);
	}

	changeBit <<= index;

	if (*n & changeBit)
	{
		*n ^= changeBit;
	}
	return (1);
}
