#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: the array to be reversed
 *
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	n--;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		++i;
		--n;
	}
}
