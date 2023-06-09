#include <stdio.h>
#include <stdlib.h>

/**
 * count_change - implements the algorithm to change a given amount to coins
 * @cents: the amount to be changed
 */

void count_change(int cents)
{
	int coins = 0;

	if (cents >= 25)
	{
		coins = cents / 25;
		cents %= 25;
	}

	if (cents >= 10)
	{
		coins += (cents / 10);
		cents %= 10;
	}

	if (cents >= 5)
	{
		coins += (cents / 5);
		cents %= 5;
	}

	if (cents >= 2)
	{
		coins += (cents / 2);
		cents %= 2;
	}

	if (cents == 1)
	{
		coins += 1;
	}

	printf("%d\n", coins);
}

/**
 * main - prints the minimum number of coins rqd to make change of a given amt
 * @argc: the number of arguments passed to the command line
 * @argv: an array of command line arguments passed
 *
 * Return: number of coins needed
 * 0 is returned if the amt passed to CL is negative
 * 1 is returned if more than 1 CL argument is passed
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}

	count_change(cents);

	return (0);
}
