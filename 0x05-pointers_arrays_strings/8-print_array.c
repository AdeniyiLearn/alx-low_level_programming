#include "main.h"

/**
 * print_array - function prints n element of array
 * @a: pointer to array of integers to be printed
 * @n: second parameter that takes the n times to be printed
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int sec, count, alt;

	count  = n;

	for (sec = 0; sec < count; sec++)
	{
		alt = *(a + sec);
		if (sec < count - 1)
		{
			printf("%d, ", alt);
		}
		else
		{
			printf("%d\n", alt);
		}
	}
}
