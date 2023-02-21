#include "main.h"

/**
 * _isalpha - identifies upper and lower case letters
 *
 * @c: represents the alphabet to be checked
 *
 * Return: 1 for lowercase character, else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
