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

		if (count <= sec)
		{
			if (count == 0)
			{
				printf("%d\n", alt);
				break;
			}
			else
			{
				break;
			}
		}
		else if (sec < count - 1)
		{
			printf("%d, ", alt);
		}
		else
		{
			printf("%d\n", alt);
		}
	}
}
