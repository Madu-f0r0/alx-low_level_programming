#include <stdio.h>

/**
 * main - prints all arguments of the program
 *
 * @argc: the number of arguments passed
 *
 * @argv: an array of strings which are the argments passed
 *
 * Return: 0
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
