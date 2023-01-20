#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of all parameters given
 * @...: represents all parameters
 *
 * Return: results or 0 if no parameter is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j = 0;
	int k = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, const unsigned int);
		k += j;
	}
	va_end(ap);
	return (k);

}
