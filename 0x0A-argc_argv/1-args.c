#include <stdio.h>

/**
 * main - prints the number of arguments passed to the command line
 * @argc: the number of command line arguments
 * @argv: an array of the command line arguments represented as strings
 *
 * Return: 0 if successful; 1 if error occurs
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
