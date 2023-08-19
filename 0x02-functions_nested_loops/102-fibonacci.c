#include <stdio.h>

/**
 * main - prints the fibonacci numbers from 1 - 50
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int temp, i = 1, j = 2;
	int fib_no = 0;

	printf("%lu, %lu", i, j);

	while (fib_no < 48)
	{
		temp = j;
		j += i;
		i = temp;

		printf(", %lu", j);
		fib_no++;
	}
	putchar('\n');
	return (0);
}
