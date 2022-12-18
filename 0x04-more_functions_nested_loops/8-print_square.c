#include <stdio.h>
#include "main.h"
/**
 * print_square - function print a square
 * @size: integer parameter
 *
 * Return: Void
 */

void print_square(int size)
{
	int counter, counter2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (counter = 0; counter < size; counter++)
		{
			for (counter2 = 0; counter2 < size; counter2++)
			{
				_putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
