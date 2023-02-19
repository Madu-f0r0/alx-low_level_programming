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
			if (i < j && i != '8' && j != '9')
			{
			putchar (i);
			putchar (j);
			putchar (',');
			putchar (' ');
			}

			else if (i == '8' && j == '9')
			{
			putchar (i);
			putchar (j);
			}
		}
	}
	putchar ('\n');
	return (0);
}
