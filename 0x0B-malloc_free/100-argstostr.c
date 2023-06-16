#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the CL arguments of a program into a string
 * @ac: the number of CL arguments of the program
 * @av: an array containing all the CL arguments
 *
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	unsigned int argIndex, strIndex, newStrIndex, totalStrLen = 0;
	char *newStr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (argIndex = 0; (int)argIndex < ac; argIndex++)
	{
		totalStrLen += strlen(av[argIndex]) + 1;
	}
	newStr = malloc((totalStrLen + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (argIndex = 0, newStrIndex = 0; (int)argIndex < ac; argIndex++)
	{
		for (strIndex = 0; strIndex <= strlen(av[argIndex]);
		strIndex++, newStrIndex++)
		{
			if (strIndex == strlen(av[argIndex]))
			{
				newStr[newStrIndex] = '\n';
			}
			else
			{
				newStr[newStrIndex] = av[argIndex][strIndex];
			}
		}
	}
	newStr[newStrIndex] = '\0';
	return (newStr);
}
