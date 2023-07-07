#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string that represents the binary number
 *
 * Return: the unsiigned int equivalent of the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int arrIndex;
	
	if (b)
	{
		arrIndex = strlen(b) - 1;
		while(arrIndex >= 0)
		{
			if (b[arrIndex] != '0' && b[arrIndex] != '1')
			{
				return (0);
			}

			if (b[arrIndex] == '1')
			{
				num += mul;
			}
			mul = mul << 1;
			/* printf("mul = %d\n", mul); */
			arrIndex--;
		}
	}
	return (num);
}
