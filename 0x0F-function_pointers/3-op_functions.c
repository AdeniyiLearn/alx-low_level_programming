#include "3-calc.h"
/**
 * op_add - function that adds two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		puts("Error");
		exit(98);
	}
	return (a + b);
}

/**
 * op_sub - function that substracts two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		puts("Error");
		exit(98);
	}
	return (a - b);
}

/**
 * op_mul - Function that multiplies two integers
 * @a: First input
 * @b: Second input
 *
 * Return: the product of it's parameters
 */

int op_mul(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		puts("Error");
		exit(98);
	}
	return (a * b);
}

/**
 * op_div - Function divides an integer
 * @a: parameter to be divided
 * @b: parameter to divide with
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		puts("Error");
		exit(98);
	}
	if (a == 0 || b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that gets remainder of a division operation
 * @a: the parameter that takes the divided
 * @b: the parameter that takes the divisor
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	if (a == NULL || b == NULL)
	{
		puts("Error");
		exit(98);
	}
	if (a == 0 || b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
