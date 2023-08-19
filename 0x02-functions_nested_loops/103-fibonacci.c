#include <stdio.h>

/**
 * main - prints the sum of even numbers in the fibonacci series up to 4000000
 *
 * Return: always 0
 */
int main(void)
{
	int temp, a = 1, b = 2;
	unsigned int sum = 2;

	while (1)
	{
		temp = b;
		b += a;
		a = temp;

		if (b > 4000000)
		{
			break;
		}

		if (b % 2 == 0)
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
	return (0);
}
