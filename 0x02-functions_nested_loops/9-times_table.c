#include <stdio.h>
#include "main.h"
/**
 * times_table - function checks if it is an alphabet
 *
 * Return: returns Void
 */
void times_table(void)
{
	int count, inc1, inc2, result;

	count = 9;
	inc1 = 0;
	inc2 = 0;

	while (inc1 <= count)
	{
		while (inc2 < count)
		{
			result = inc2 * inc1;
			if (inc2 >= 1)
			{
				printf("%3d,", result);
			}
			else
			{
				printf("%d,", result);
			}
			inc2++;
		}
		printf("%3d\n", inc2 * inc1);
		inc2 = 0;
		inc1++;
	}
}
