#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and n bytes of s2 into s3
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: Number of bytes of s2 to be concatenated
 * Return: s3 if success, NULL if error occurs
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1, len2;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;
	s3 = malloc((len1 + n + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
