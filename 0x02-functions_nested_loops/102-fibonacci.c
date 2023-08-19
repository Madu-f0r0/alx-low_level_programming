#include <stdio.h>

/**
 * main - prints the fibonacci numbers from 1 - 50
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1, j = 2, temp;

	printf("%d, %d", i, j);

	while (1)
	{
		temp = j;
		j += i;
		i = temp;

		if (j > 50)
		{
			break;
		}
		printf(", %d", j);
	}
	putchar('\n');
	return (0);
}
