#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: the number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	int c, i = 0;
	char arr[64];

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n)
	{
		c = n & 1;
		arr[i] = 48 + c;
		n = n >> 1;
		i++;
	}
	arr[i] = '\0';

	while (i >= 0)
	{
		_putchar(arr[i]);
		i--;
	}
}
