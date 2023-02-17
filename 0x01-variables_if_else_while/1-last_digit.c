#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = (n % 10);
		printf("Last digit of %d", n);
		printf(" is %d", ld);
	if (ld > 5)
		printf(" and is greater than 5\n");
	else if (ld == 0)
		printf(" and is 0\n");
	else if (ld < 6 && ld != 0)
		printf(" and is less than 6 and not 0\n");

	return (0);
}
