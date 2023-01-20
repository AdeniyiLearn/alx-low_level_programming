#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 *
 * @separator:  string to be printed between numbers
 * @n: number of all parameters given
 * @...: represents all parameters
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, const unsigned int);
		if (j != '\0')
		{
			if (n != 0)
			{
				printf("%d", j);
			}
			if (i < (n - 1))
			{
				if (separator != NULL)
				{
					printf("%c", *separator);
				}
			}
		}
	}
	printf("\n");
	va_end(ap);
}
