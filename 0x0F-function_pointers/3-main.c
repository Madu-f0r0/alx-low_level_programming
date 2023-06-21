#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the value of an arithmetic operation b/w 2 numbers
 * @argc: the number of command line argmuents passed
 * @argv: an array of the command line arguments passed
 *
 * Return: 0 if successful
 * Exits with  status 98, 99, or 100 if an error occurs
 */

int main(int argc, char *argv[])
{
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
