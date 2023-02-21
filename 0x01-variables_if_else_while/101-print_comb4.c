#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (k = '0'; j <= '9'; j++)
			{
				if (i < j && j < k)
				{
					putchar (i);
					putchar (j);
					putchar (k);
					if (i == '7' && j == '8' && k == '9')
					{
						continue;
					}
					else
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
