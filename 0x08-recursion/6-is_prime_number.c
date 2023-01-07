#include "main.h"

/**
 * is_prime_number - raise x to the power of y
 *
 * @n: integer parameter
 *
 *
 * Return: -1 if less than 0, 1 if equals to 0 else result
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
