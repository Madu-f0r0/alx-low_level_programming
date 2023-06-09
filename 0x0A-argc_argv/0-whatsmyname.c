#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the command line
 * @argv: an array f the arguments passed to the command line
 *
 * Return: 0 if successful; 1 if error occurs
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
