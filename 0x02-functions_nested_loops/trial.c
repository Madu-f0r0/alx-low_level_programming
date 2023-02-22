#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	n = 0;
	int l = 0; 
	
	l = n % ('0' + 10);

	_putchar ('0' + l);
	_putchar ('\n');
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    return (0);
}
