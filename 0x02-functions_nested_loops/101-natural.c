#include <stdio.h>

/**
 * main - lists natural numbers below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}
