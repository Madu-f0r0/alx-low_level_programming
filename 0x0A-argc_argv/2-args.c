#include <stdio.h>

/**
 * main - prints all the CLIs of a program
 * @argc: the number of command line arguments passed
 * @argv: an array of the command line arguments passed
 *
 * Return: 0 if successful; 1 if an error occurs
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
