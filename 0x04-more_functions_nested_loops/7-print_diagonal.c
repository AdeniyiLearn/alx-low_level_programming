#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int count = 0, count2;

	while (count < n && n > 0)
	{
		count2 = 0;
		while (count2 < count)
		{
			_putchar(' ');
			count2++;
		}

		_putchar('\\');
		_putchar('\n');
		count++;
	}
	if (count == 0)
		_putchar('\n');
}
