#include <stdio.h>

/**
 * main - lists and prints the sum of natural numbers below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
