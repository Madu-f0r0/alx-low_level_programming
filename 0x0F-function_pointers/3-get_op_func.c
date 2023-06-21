#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects a function from an array of function structs
 * @s: determines which function is selected
 *
 * Return: the function selected
 * NULL is returned if none of the structs contains the symbol passed as arg
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
