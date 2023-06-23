#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints all the optional arguments passed
 * @format: the format string
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *buffer = NULL;
	va_list list;

	va_start(list, format);

	while (format != NULL && i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				buffer = va_arg(list, char *);
				if (buffer == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", buffer);
		}
		i++;
	}
	printf("\n");
}
