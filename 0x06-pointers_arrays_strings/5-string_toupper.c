#include "main.h"

/**
 * string_toupper - converts lowercase in a string to uppercase
 *
 * @n: string literal to be converted to uppercase
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= 32;
		}
		i++;
	}
	return (n);
}
