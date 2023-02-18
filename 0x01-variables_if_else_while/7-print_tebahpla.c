#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a' ; ch--)
	{
		putchar (ch);
	}
	{
		putchar ('\n');
	}
	return (0);
}
