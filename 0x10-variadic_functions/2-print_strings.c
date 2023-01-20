#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints numbers, followed by a new line
 *
 * @separator:  string to be printed between numbers
 * @n: number of all parameters given
 * @...: represents all parameters
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			printf("%s", va_arg(ap, char *));
		}
		if (i < (n - 1))
		{
			if (separator != NULL)
			{
				printf("%c", *separator);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
