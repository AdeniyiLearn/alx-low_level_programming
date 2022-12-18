#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function prints 0 to 14 10 times
 *
 * Return: Void
 */

void more_numbers(void)
{
	int a = 0, b, c, d;

	for (d = 0; d < 10; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				b = c;
				a = c / 10;
				_putchar('0' + a);
				c = c % 10;

			}
			_putchar('0' + c);
			if (a > 0)
			{
				c = b;
			}
		}
		_putchar('\n');
		c = 0;
		a = 0;
	}
}
