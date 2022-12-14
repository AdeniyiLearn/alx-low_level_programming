#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function checks if it is an alphabet
 * @n: integer parameter
 * Return: returns solution
 */

int print_last_digit(int n)
{
	int r = 0;

	if (n > 0)
	{
		r = n % 10;
		_putchar ('0' + r);
		return (r);
	}
	else if (n < 0)
	{
		r = ((n  * -1) % 10);
		_putchar('0' + r);
		return (r);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
