#include <stdio.h>
#include "main.h"

/**
 * _atoi -  convert a string to an integer
 *
 * @s: the pointer to convert
 *
 * Return: ni
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int nin = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			nin *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= nin;
	return (ni);
}

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 *
 * @argv: array of strings which are the arguments passed
 *
 * Return: 0 if successful or 1 if error occurs
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = _atoi(argv[1]) * _atoi(argv[2]);

	printf("%d\n", mult);
	return (0);
}
