#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - calcuates the sum of int arguments passed on the command line
 * @argc: the number of command line arguments passed
 * @argv: an array of the command line arguments passed
 *
 * Return: the sum of the argments if successful
 * 0 is returned if no argument is passed, 1 if an error occurs
 */

int main(int argc, char *argv[])
{
	int i, argSum = 0;
	unsigned int j;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		argSum += atoi(argv[i]);
	}

	printf("%d\n", argSum);

	return (0);
}
