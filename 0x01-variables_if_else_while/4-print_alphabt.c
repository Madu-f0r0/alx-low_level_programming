#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int ch, e, q;
	 e = 'e';
	 q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != e && ch != q)
	putchar(ch);
	putchar('\n');
	return (0);
}
