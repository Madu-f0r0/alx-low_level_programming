#include "main.h"

/**
 * get_bit - selects the value of a bit at a given index
 * @n: the number whose bit value is to be selected
 * @index: the index to select the bit value
 *
 * Return: the bit value selected
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char arr[64];
	int i = 0;

	for (; i < 63; i++)
	{
		arr[i] = 0;
	}
	i = 0;
	if (n < 2)
	{
		arr[i++] = n;
		arr[i] = '\0';
	}
	else
	{
		while (n)
		{
			arr[i] = (n & 1);
			n = n >> 1;
			i++;
		}
		arr[i] = '\0';
	}

	if ((int)index > 63)
	{
		return (-1);
	}

	i = 0;
	while (i < (int)index)
	{
		i++;
	}
	return (arr[i]);
}
