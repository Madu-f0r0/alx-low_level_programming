#include "main.h"

/**
 * cap_string - capitalizes every word in the string
 *
 * @str: string whose words are to be capitalized
 *
 * Return: str
 */

char *cap_string(char *str)
{
	char *sprt = " \t\n,;.!?\"(){}";
	int i, j;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; sprt[j] != '\0'; j++)
		{
			if (str[i - 1] == sprt[j] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
