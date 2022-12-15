#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function prints all natural numbers from n to 98
 * @n:input
 * Return: returns void
 */

void print_to_98(int n)
{
	int k;

	if (n < 98)
	{
		for (k = n; k < 98; k++)
		{
		printf("%d, ", k);
		}
	}
	else if (n > 98)
	{
		for (k = n; k > 98; k--)
		{
			printf("%d, ", k);
		}
	}
	printf("%d\n", 98);
}
