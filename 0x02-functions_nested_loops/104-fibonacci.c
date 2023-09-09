#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int temp, f1, f2, s1, s2, a = 1, b = 2;
	int fib_no = 1;

	printf("%lu", a);

	while (fib_no < 91)
	{
		printf(", %lu", b);
		temp = b;
		b += a;
		a = temp;

		fib_no++;
	}

	f2 = b / 1000000000;
	s2 = b % 1000000000;
	f1 = a / 1000000000;
	s1 = a % 1000000000;

	while (fib_no < 98)
	{
		printf(", %lu", f2 + (s2 / 1000000000));
		printf("%lu", s2 % 1000000000);

		temp = f2;
		f2 += f1;
		f1 = temp;

		temp = s2;
		s2 += s1;
		s1 = temp;

		fib_no++;
	}
	putchar('\n');
	return (0);
}
