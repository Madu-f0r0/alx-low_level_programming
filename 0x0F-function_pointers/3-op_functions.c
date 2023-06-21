#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calculates the sum of two given numbers
 * @a: the first number to be added
 * @b: the second number to be added
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between two given numbers
 * @a: the number to be subtracted from
 * @b: the amount to be subtracted
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two given numbers
 * @a: the first operand
 * @b: the second operand
 * Return: the product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the number to be divided
 * @b: the divisor
 * Return: the result of the division operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulus of two numbers
 * @a: the left operand
 * @b: the right operand
 * Return: the result of the modulus operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
