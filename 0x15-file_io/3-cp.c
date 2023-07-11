#include "main.h"

/**
 * copy_func - copies the content of a file to another file
 * @file_orig: the file whose content is to be copied into another file
 * @file_cpy: the file to be copied into
 */
void copy_func(char *file_orig, char *file_cpy)
{
	int fdOrig, fdCpy, index;
	ssize_t rRet, wRet, clOrig, clCpy;
	char buff[1024];

	fdOrig = open(file_orig, O_RDONLY);
	fdCpy = open(file_cpy, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	index = 0;
	do {
		rRet = read(fdOrig, buff, 1024);
		if (fdOrig == -1 || rRet == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_orig);
			exit(98);
		}

		wRet = write(fdCpy, buff, rRet);
		if (fdCpy == -1 || wRet == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_cpy);
			exit(99);
		}
		index++;
	} while (rRet == 1024);

	clOrig = close(fdOrig);
	if (clOrig == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdOrig);
		exit(100);
	}
	clCpy = close(fdCpy);
	if (clCpy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdCpy);
		exit(100);
	}
}

/**
 * main - receives two CL arguments (file_from) and (file_to)
 * @argc: the number of CL arguments
 * @argv: an array of the CL arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_func(argv[1], argv[2]);
	return (0);
}
