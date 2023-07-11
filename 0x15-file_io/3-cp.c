#include "main.h"

/**
 * copy_text - copies the content of a file to another file
 * @file_from: .
 * @file_to: .
 */
void copy_text(char *file_from, char *file_to)
{
	int fdf, fdt, i = 0;
	char buff[1024];
	ssize_t rRet, wRet, fCl, tCl;

	fdf = open(file_from, O_RDONLY);
	fdt = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);

	do {
		rRet = read(fdf, buff, 1024);
		if (fdf == -1 || rRet == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		wRet = write(fdt, buff, rRet);
		if (fdt == -1 || wRet == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		i++;
	} while (rRet != 0);

	fCl = close(fdf);
	if (fCl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	tCl = close(fdt);
	if (tCl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
}

/**
 * main - receives two CL arguments (file_from) and (file_to)
 * @argc: .
 * @argv: .
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

	copy_text(argv[1], argv[2]);
	return (0);
}
