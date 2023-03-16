#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds two numbers
 *
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: 0 if successful or 1 if error occurs
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for  (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
