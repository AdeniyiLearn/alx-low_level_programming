#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints n times table, starting from 0
 * @n: integer parameter for n times multiplication
 *
 * Return: returns Void
 */
void print_times_table(int n)
{
	int count, inc1, inc2, result;

	count = n;
	inc1 = 0;
	inc2 = 0;

	while (inc1 <= count)
	{
		if (n > 15)
		{
			break;
		}
		while (inc2 < count)
		{
			result = inc2 * inc1;
			if (inc2 >= 1)
			{
				printf("%4d,", result);
			}
			else
			{
				printf("%d,", result);
			}
			inc2++;
		}
		printf("%4d\n", inc2 * inc1);
		inc2 = 0;
		inc1++;
	}
}
