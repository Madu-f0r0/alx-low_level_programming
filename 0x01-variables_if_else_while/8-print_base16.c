#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n, ch;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	{
		putchar ('\n');
	}
	return (0);
}
