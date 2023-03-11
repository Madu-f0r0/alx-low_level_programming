#include <stdio.h>

/**
 * main - prints the number of argumens passed to it
 *
 * @argc: represents number of arguments passed
 *
 * @argv: array of the strings passed as argument
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
