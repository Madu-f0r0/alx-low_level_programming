#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * return void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		_putchar ('\n');
	}
}
