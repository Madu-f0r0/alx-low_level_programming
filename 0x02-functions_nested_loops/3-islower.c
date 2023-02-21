#include "main.h"

/**
 * _islower - identifies lower case letters
 *
 * @c: represents the alphabet to be checked
 *
 * Return: 1 for lowercase character, else returns 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
