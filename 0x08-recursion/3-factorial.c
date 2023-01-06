#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: takes an integer parameter
 * Return: 1 when done -1 if an error
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
