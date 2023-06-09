#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcuates the product of two ints passed on the command line
 * @argc: number of command line arguments passed
 * @argv: an array of the command line arguments passed
 *
 * Return: 0 if successful; 1 if error occurs
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0, z;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	z = x * y;
	printf("%d\n", z);

	return (0);
}
