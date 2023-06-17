#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * word_count - Counts the number of words in a string
 * @str: the string whose words are to be counted
 *
 * Return: the number of words in the string
 */

int word_count(char *str)
{
	int strIndex, wordCount = 0;

	if (str[0] != ' ' && str[0] != '\0')
	{
		wordCount = 1;
	}
	for (strIndex = 0; strIndex < (int)strlen(str); strIndex++)
	{
		if (str[strIndex] == ' ' && str[strIndex + 1] != ' '
		&& str[strIndex + 1] != '\0')
		{
			wordCount++;
		}
	}
	return (wordCount);
}

/**
 * mem_alloc - allocates memory for the individual words in a given string
 * @str: the string for whose words memory is to be allocated
 * @words: the number of words in the string
 *
 * Return: a pointer to the allocated memory
 */

char **mem_alloc(char *str, int words)
{
	int strIndex, wordNo, wordIndex, freeWordInd;
	char **wordPtr;

	wordPtr = malloc((words + 1) * sizeof(char *));
	if (wordPtr == NULL)
	{
		return (NULL);
	}

	for (strIndex = 0, wordNo = 0, wordIndex = 0; strIndex <=
	(int)strlen(str); strIndex++, wordIndex++)
	{
		if (strIndex != 0)
		{
			if (str[strIndex - 1] == ' ')
			{
				wordIndex = 0;
			}
			if ((str[strIndex] == ' ' && str[strIndex - 1] != ' ')
			|| (str[strIndex - 1] !=
			' ' && str[strIndex] == '\0'))
			{
				wordPtr[wordNo] = malloc((wordIndex + 1) * sizeof(char));
				if (wordPtr[wordNo] == NULL)
				{
					for (freeWordInd = wordNo - 1; freeWordInd >= 0; freeWordInd--)
					{
						free(wordPtr[freeWordInd]);
					}
					free(wordPtr);
					return (NULL);
				}
				wordNo++;
			}
		}
	}
	return (wordPtr);
}

/**
 * strtow - seperates a string into its individual words
 * @str: the string to be seperated into its words
 *
 * Return: a pointer to the seperate words in the string
 * NULL is returned if otherwise
 */

char **strtow(char *str)
{
	int strIndex, wordNo, wordIndex, words;
	char **arr;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}
	words = word_count(str);
	if (words == 0)
	{
		return (NULL);
	}
	arr = mem_alloc(str, words);

	for (strIndex = 0, wordNo = 0, wordIndex = 0; strIndex <
	(int)strlen(str); strIndex++)
	{
		if (str[strIndex] != ' ')
		{
			arr[wordNo][wordIndex] = str[strIndex];
			wordIndex++;
			if (str[strIndex + 1] == ' ' || str[strIndex + 1] == '\0')
			{
				arr[wordNo][wordIndex] = '\0';
				strIndex++;
				wordNo++;
				wordIndex = 0;
			}
		}
	}
	arr[wordNo] = NULL;
	return (arr);
}
