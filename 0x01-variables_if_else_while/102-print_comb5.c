#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar (i / 10 + '0');
				putchar (i % 10 + '0');
				putchar (' ');
				putchar (j / 10 + '0');
				putchar (j % 10 + '0');

				if (i == 98 && j == 99)
				{
					break;
				}
				else
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
