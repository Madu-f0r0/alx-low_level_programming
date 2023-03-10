#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: no. of arguments passed
 *
 * @argv: array of strings containing the strings passed as arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
