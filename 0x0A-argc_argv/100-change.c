#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of coins for change
 * @ac: argument count
 * @av: array of arguments passed
 * Return: 1 if error occurs; 0 if successful
 */

int main(int ac, char *av[])
{
	int i, x;
	int y = 0;
	int arr[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		puts("Error");
		return (1);
	}

	x = atoi(av[1]);

	for (i = 0; i < 5; i++)
	{
		if (x >= arr[i])
		{
			y += (x / arr[i]);
			x = (x % arr[i]);
		}
	}
	printf("%d\n", y);
	return (0);
}
