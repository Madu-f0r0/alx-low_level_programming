#include "main.h"

/**
 * read_textfile - reads and prints contents of a file to POSIX stdout
 * @filename: .
 * @letters: .
 *
 * Return: number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDes;
	char *fileBuff;
	ssize_t readRet, writeRet = 0;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}

	fileBuff = malloc(sizeof(char) * letters);
	if (fileBuff == NULL)
	{
		return (0);
	}

	fileDes = open(filename, O_RDONLY);
	if (fileDes == -1)
	{
		free(fileBuff);
		return (0);
	}

	readRet = read(fileDes, fileBuff, letters);
	if (readRet == -1)
	{
		free(fileBuff);
		return (0);
	}

	writeRet = write(STDOUT_FILENO, fileBuff, readRet);
	if (writeRet != readRet || writeRet == -1)
	{
		return (0);
	}

	free(fileBuff);
	close(fileDes);

	return (writeRet);
}
