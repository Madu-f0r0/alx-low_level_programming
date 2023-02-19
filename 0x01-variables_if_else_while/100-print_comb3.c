#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
			putchar (i);
			putchar (j);
			putchar (',');
			putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
