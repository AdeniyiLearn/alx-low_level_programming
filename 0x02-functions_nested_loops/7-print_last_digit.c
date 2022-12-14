#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function checks if it is an alphabet
 * @n: integer parameter
 * Return: returns solution
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
	{
		r *= -1;
	}
	_putchar('0' + r);
	return (r);
}
