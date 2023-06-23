#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * arg_counter - counts the no. of valid format specifiers in a format string
 * @format: the format string
 *
 * Return: the number of arguments
 */

unsigned int arg_counter(const char * const format)
{
	unsigned int counter = 0, i = 0;

	while (format != NULL && i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				counter++;
				break;
			case 'i':
				counter++;
				break;
			case 'f':
				counter++;
				break;
			case 's':
				counter++;
		}
		i++;
	}
	return (counter);
}

/**
 * check_buffer - checks if buffer passed is NULL and prints accordingly
 * @buffer: buffer to be checked
 */

void check_buffer(char *buffer)
{
	switch (buffer == NULL)
	{
		case 1:
			printf("(nil)");
			break;
		case 0:
			printf("%s\n", buffer);
			break;
	}
}

/**
 * print_all - prints all the optional arguments passed
 * @format: the format string
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, validFormatSwitch;
	char *buffer = NULL;
	va_list list;

	va_start(list, format);

	while (format != NULL && i < strlen(format))
	{
		validFormatSwitch = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				validFormatSwitch = 1;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				validFormatSwitch = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				validFormatSwitch = 1;
				break;
			case 's':
				buffer = va_arg(list, char *);
				check_buffer(buffer);
				validFormatSwitch = 1;
		}
		if (validFormatSwitch == 1 && j < (arg_counter(format)) - 1)
		{
			printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
}
