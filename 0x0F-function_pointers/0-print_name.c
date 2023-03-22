#include "function_pointers.h"

/**
 * print_name - prints a name stored in a string literal
 * @name: variable representing the string literal
 * @f: pointer to a function that returns a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
