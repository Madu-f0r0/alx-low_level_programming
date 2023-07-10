#include "main.h"

/**
 * append_text_to_file - appends a string to a file
 * @filename: the name of the file to be created
 * @text_content: the string to be written  into the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDes = open(filename, O_WRONLY | O_APPEND);
	if (fileDes == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	if (write(fileDes, text_content, len) == -1)
	{
		return (-1);
	}

	return (1);
}
