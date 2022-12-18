#include <stdio.h>
#include "main.h"
/**
 * print_line - function prints ___ nth times
 * @n: integer parameter
 *
 * Return: Void
 */

void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
