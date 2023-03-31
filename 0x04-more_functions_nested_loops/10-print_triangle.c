#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int num = 1, num2;

	while (num <= size && size > 0)
	{
		num2 = 0;
		while (num2 < size - num)
		{
			_putchar(' ');
			num2++;
		}
		num2 = 0;
		while (num2 < num)
		{
			_putchar('#');
			num2++;
		}

		_putchar('\n');
		num++;
	}
	if (num == 1)
		_putchar('\n');
}
